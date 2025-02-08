#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from sensor_interfaces.srv import PID

# este nodo es el que conecta al servicio de simulacion del PID


class GetPIDClientNode(Node):
    def __init__(self):
        # servidor   
        super().__init__('my_PID_server')
        self.server= self.create_service(PID, '/server' , self.callback_get_response_pid)
        self.get_logger().info("PID Server listo y esperando solicitudes...")

    def callback_get_response_pid(self, request, response):
        response.result = int(request.p) + int(request.i) + int(request.d) 
        return response


def main(args=None):
    try:
        rclpy.init(args=args)
        node = GetPIDClientNode()
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
