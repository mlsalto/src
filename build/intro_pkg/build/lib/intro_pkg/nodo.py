#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

class MyNode(Node):
    def __init__(self):
        super().__init__('my_node')

        self.i = 0
        self.timer = self.create_timer(1/2, self.print_hello)

    def print_hello(self):
        self.get_logger().info(f'hello world {self.i}')
        self.i += 1

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