import rclpy
from rclpy.node import Node
from alg_gen_interfaces.msg import GeneticParams

class MyNode(Node):
    def __init__(self):
        super().__init__('alg_gen_publisher')
        
        # topic publisher 
        self.publisher = self.create_publisher(GeneticParams,"alg_gen_param_publisher", 10)
       # self.timer = self.create_timer(0.5, self.publish_alg_gen_params)
        self.get_logger().info("Alg gen param publisher connected...")

    def alg_gen_param_publisher(self):
        self.publisher.publish(
            GeneticParams()
        )

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