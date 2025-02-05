import random
import rclpy
from functools import partial
from operator import itemgetter
from msgs_control.srv import SimPID
from rclpy.node import Node

class Genetico(Node):
    def __init__(self):
        super().__init__('genetic_algorithm_client')
        self.declare_parameter('wts', 25.0)
        self.declare_parameter('wd', .6)
        self.declare_parameter('wovs', 200.)
        self.declare_parameter('wees', 15.)

        self.w0 = self.get_parameter('wts').get_parameter_value().double_value
        self.w1= self.get_parameter('wd').get_parameter_value().double_value
        self.w2 = self.get_parameter('wovs').get_parameter_value().double_value
        self.w3= self.get_parameter('wees').get_parameter_value().double_value

        self.Fitness = 0
        self.last_response = None

        self.w = (self.w0 , self.w1, self.w2, self.w3)  # Pesos de ts, d, overshoot, ess

        self.genetic_algorithm(100, 3, 20, 0.33, 0.7),

    def llamada_control(self, p, i, d):
        client = self.create_client(SimPID, '/serv/sim_pid')

        while not client.wait_for_service(1.0):
            self.get_logger().warn('Waiting for server')
        request = SimPID.Request()
        request.kp = p
        request.ki = i
        request.kd = d

        future = client.call_async(request)
        future.add_done_callback(partial(
            self.callback_call_get_data_sim,
            p=p, i=i, d=d
        ))

        # Esperar hasta que future.done() sea True
        while not future.done():
            rclpy.spin_once(self, timeout_sec=0.1)  

        try:
            response = future.result()
            return response  
        except Exception as e:
            self.get_logger().error(f'Error en la llamada al servicio: {e}')
            return None


    def callback_call_get_data_sim(self, future, p, i, d):
        try:
            response = future.result()
           # self.get_logger().info(f'{response.ts}')
        except Exception as e:
            self.get_logger().error('{e}')

        # Función de evaluación (fitness)
    def evaluate(self, chromosome):
        #llamada al servicio de simulacion
        self.last_response = self.llamada_control(chromosome[0], chromosome[1], chromosome[2])

        #cálculo del fitness  
        fitness = (self.w[0]*self.last_response.ts) +(self.w[1]*self.last_response.d) +(self.w[2]*self.last_response.overshoot)+ (self.w[3]*self.last_response.ess)
        return fitness

    # Generar un cromosoma aleatorio
    def generate_random_chromosome(self, length):  
        chromosome = []
        for _ in range(length):
            gene = random.uniform(0.0, 10.0)  # Generar número aleatorio en el rango [0.0, 10.0]
            chromosome.append(gene)            
        return chromosome

    # Cruzar dos cromosomas
    def crossover(self, chromosome1, chromosome2, crossover_rate):
        new_chromosome=chromosome1
        if random.random() < crossover_rate:
            crossover_point = random.randint(1, len(chromosome1) - 1)
            new_chromosome = chromosome1[:crossover_point] + chromosome2[crossover_point:]
        return new_chromosome
        
    # Mutar un cromosoma
    def mutate(self, chromosome, mutation_rate):
        mutated_chromosome = []
        for gene in chromosome:
            if random.random() < mutation_rate:
                mutated_gene = random.uniform(0.0, 10.0)  # Generar número aleatorio en el rango [0.0, 5.0]
            else:
                mutated_gene = gene
            mutated_chromosome.append(mutated_gene)
        return mutated_chromosome

    #selección por torneo
    def selection_tournament(self, population_size, evaluated_population, T):
            parents = []            
            while len(parents) < population_size:
                candidates=[]
                for ite in range(T):
                    candidates.append(random.choice(evaluated_population))                            
                parents.append(min(candidates, key=itemgetter(1))[0])
            return parents
    
    # Algoritmo genético
    def genetic_algorithm(self, population_size, chromosome_length, generations, mutation_rate, crossover_rate):
        population = []
        for _ in range(population_size):
            chromosome = self.generate_random_chromosome(chromosome_length)
            population.append(chromosome)
       
        for generation in range(generations):            
            # Evaluación de la población
            evaluated_population = [(chromosome, self.evaluate(chromosome)) for chromosome in population]

            # Selección de padres mediante torneo de longitud T
            parents = []
            T=8 # Se seleccionan 8 cromosomas de manera aleatoria pra el torneo. Nos quedaremos con el de menor función de fitness
            parents = self.selection_tournament(population_size, evaluated_population, T)

            # Cruzamiento y mutación para generar descendencia
            offspring = []
            for i in range(0, population_size, 2):
                parent1 = parents[i]
                parent2 = parents[i + 1]
                child1 = self.crossover(parent1, parent2, crossover_rate)
                child2 = self.crossover(parent2, parent1, crossover_rate)
                mutated_child1 = self.mutate(child1, mutation_rate)
                mutated_child2 = self.mutate(child2, mutation_rate)
                offspring.extend([mutated_child1, mutated_child2])

            # Reemplazar la población anterior con la descendenciaS
            population = offspring

        # Devolver el mejor cromosoma de la última generación
        best_chromosome = min(evaluated_population, key=lambda x: x[1])#[0]

        self.get_logger().info(f'{best_chromosome}')

def main(args=None):
    try:
        rclpy.init(args=args)
        node = Genetico()
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    except Exception as e:
        print(e)
    else:
        print('ok')
    finally:
        rclpy.try_shutdown()

if __name__ == '__main__':
    main()