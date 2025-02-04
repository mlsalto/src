import random
import rclpy
from functools import partial
from operator import itemgetter
from msgs_control.srv import SimPID
from rclpy.node import Node

class Genetico(Node):
    def __init__(self):
        super().__init__('genetic_algorithm_client')
        self.Fitness = 0
        self.w = (25., .6, 200., 15.)  # Pesos de ts, d, overshoot, ess

        # Esperar que el servicio esté disponible
        while not self.client.wait_for_service(1.0):
            self.get_logger().warn('Esperando servidor')

    def llamada_control(self, p, i, d):
        client = self.create_client(SimPID, '/serv/sim_pid')

        while not client.wait_for_service(1.0):
            self.get_logger().warn('Waiting for server')
        request = SimPID.Request()
        request.kp = p
        request.ki = i
        request.kd = d

        future = self.client.call_async(request)
        future.add_done_callback(partial(
            self.callback_call_get_data_sim,
            p=p, i=i, d=d
        ))

    def callback_call_get_data_sim(self, future, p, i, d):
        try:
            response = future.result()
            self.get_logger().info(f'{response}')
        except Exception as e:
            self.get_logger().error('{e}')

    def evaluate(self, chromosome):

       # AQUÍ SE HACE LA LLAMADA/ VUELTA DE DATOS DEL SERVICIO :) 
        """Evaluar el cromosoma y obtener su fitness a través del servicio."""
        self.llamada_control(chromosome[0], chromosome[1], chromosome[2])

    def generate_random_chromosome(self, length):
        """Genera un cromosoma aleatorio"""
        chromosome = []
        for _ in range(length):
            gene = random.uniform(0.0, 10.0)
            chromosome.append(gene)
        return chromosome

    def crossover(self, chromosome1, chromosome2, crossover_rate):
        """Cruza dos cromosomas"""
        new_chromosome = chromosome1
        if random.random() < crossover_rate:
            crossover_point = random.randint(1, len(chromosome1) - 1)
            new_chromosome = chromosome1[:crossover_point] + chromosome2[crossover_point:]
        return new_chromosome

    def mutate(self, chromosome, mutation_rate):
        """Mutación de cromosoma"""
        mutated_chromosome = []
        for gene in chromosome:
            if random.random() < mutation_rate:
                mutated_gene = random.uniform(0.0, 10.0)
            else:
                mutated_gene = gene
            mutated_chromosome.append(mutated_gene)
        return mutated_chromosome

    def selection_tournament(self, population_size, evaluated_population, T):
        """Selección por torneo"""
        parents = []
        while len(parents) < population_size:
            candidates = []
            for _ in range(T):
                candidates.append(random.choice(evaluated_population))
            parents.append(min(candidates, key=itemgetter(1))[0])
        return parents

    def genetic_algorithm(self, population_size, chromosome_length, generations, mutation_rate, crossover_rate):
        """Algoritmo genético"""
        population = []
        for _ in range(population_size):
            chromosome = self.generate_random_chromosome(chromosome_length)
            population.append(chromosome)

        for generation in range(generations):
            evaluated_population = [(chromosome, self.evaluate(chromosome)) for chromosome in population]

            # Selección de padres
            T = 8
            parents = self.selection_tournament(population_size, evaluated_population, T)

            # Cruzamiento y mutación
            offspring = []
            for i in range(0, population_size, 2):
                parent1 = parents[i]
                parent2 = parents[i + 1]
                child1 = self.crossover(parent1, parent2, crossover_rate)
                child2 = self.crossover(parent2, parent1, crossover_rate)
                mutated_child1 = self.mutate(child1, mutation_rate)
                mutated_child2 = self.mutate(child2, mutation_rate)
                offspring.extend([mutated_child1, mutated_child2])

            # Actualizar población
            population = offspring

        best_chromosome = min(evaluated_population, key=lambda x: x[1])
        return best_chromosome
    

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