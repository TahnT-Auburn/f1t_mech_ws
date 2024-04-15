import os
from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory

def generate_launch_description():

    config_path = os.path.join(
        get_package_share_directory('img_proc'),
        'config'
    )
    return LaunchDescription([
        Node(
            package="img_proc",
            executable="img_proc_node",
            name="img_proc_node",
            output="screen",
            parameters=[os.path.join(config_path, 'img_proc_config.yaml')]
        ),
    ])