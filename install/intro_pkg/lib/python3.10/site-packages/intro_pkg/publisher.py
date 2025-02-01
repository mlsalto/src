#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from example_interfaces.msg import Int32

class MyNode(Node):
    def __init__(self):
        super().__init__('my_publisher')
        self.i = 0
        self.publisher = self.create_publisher(Int32, 'talker', 10)
        self.timer = self.create_timer(1/2, self.print_hello)

    def print_hello(self):
        self.get_logger().info(f'hello world {self.i}')
        self.publisher.publish(
            Int32(data=int(self.i))
        )
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