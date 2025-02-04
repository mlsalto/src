from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource

from ament_index_python.packages import get_package_share_directory

#launcher, mirar en docu ros2

def generate_launch_description():
    return LaunchDescription([
#        Node(
           # package='intro_pkg',
           # executable='client',
       # ),
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource(
               [
                   get_package_share_directory('sim_pkg'),
                   '/sim_srv.launch.py'
               ] 
            )
        ),
        
    ])