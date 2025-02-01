import rclpy
from rclpy.node import Node
from functools import partial
from msgs_control.srv import SimPID


class GetPerformanceParamNode(Node):
    def __init__(self):
        super().__init__('get_sim_data_client')
       #esta linea es la que hace la llamada con ki, kpo y kd, modificar por una funcion que vaya llamando :) 
        self.call_get_sim_pid_server(1., 2., 3.)

    def call_get_sim_pid_server(self, p, i, d):
       # el valor de serv/sim_pid es el que se obtiene al ejecutar el servidor de simulacion   
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

    def callback_call_get_data_sim(self, future, p, i, d):
        try:
            response = future.result()
            self.get_logger().info(f'{response}')
        except Exception as e:
            self.get_logger().error('{e}')
def main(args=None):
    try:
        rclpy.init(args=args)
        node = GetPerformanceParamNode()
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