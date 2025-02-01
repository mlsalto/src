#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from example_interfaces.msg import Int32
from sensor_interfaces.msg import PID

class MyNode(Node):
    def __init__(self):
        super().__init__('my_subscriber')

        self.subscriber = self.create_subscription(Int32, '/talker', self.subs_callback, 10)

    def subs_callback(self, msg: Int32):
        self.get_logger().warn(f'Dato recibido: {msg.data}')

def main(args=None):
    try:
        rclpy.init(args=args)
        node = MyNode()
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