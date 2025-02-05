from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource

from ament_index_python.packages import get_package_share_directory

#launcher, mirar en docu ros2

def generate_launch_description():
    return LaunchDescription([
        Node(
           package='alg_gen',
           executable='pid_server_node',
        ),
        Node(
           package='alg_gen',
           executable='gen_node',
           parameters=[{
                'wts': 25.,
                'wd': .6,
                'wovs': 200.,
                'wees': 15.
            }],
        ),
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource(
               [
                   get_package_share_directory('sim_pkg'),
                   '/sim_srv.launch.py'
               ] 
            )
        ),
        
    ])