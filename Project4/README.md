#Project4
![Overview](/Screenshots/slam2.png)  

## Overview  
In this project you will create a 2D occupancy grid and 3D octomap from a simulated environment using your own robot with the RTAB-Map package.  
RTAB-Map (Real-Time Appearance-Based Mapping) is a popular solution for SLAM to develop robots that can map environments in 3D. RTAB-Map has good speed and memory management, and it provides custom developed tools for information analysis. Most importantly, the quality of the documentation on ROS Wiki (http://wiki.ros.org/rtabmap_ros) is very high. Being able to leverage RTAB-Map with your own robots will lead to a solid foundation for mapping and localization well beyond this Nanodegree program.  
For this project we will be using the `rtabmap_ros` package, which is a ROS wrapper (API) for interacting with RTAB-Map. Keep this in mind when looking at the relative documentation.  
* You will develop your own package to interface with the rtabmap_ros package.  
* You will build upon your localization project to make the necessary changes to interface the robot with RTAB-Map. An example of this is the addition of an RGB-D camera.  
* You will ensure that all files are in the appropriate places, all links are properly connected, naming is properly setup and topics are correctly mapped. Furthermore you will need to generate the appropriate launch files to launch the robot and map its surrounding environment.  
* When your robot is launched you will teleop around the room to generate a proper map of the environment.  

## Run the project  
1. Launch my_robot in Gazebo to load both the world and plugins  
```
roslaunch my_robot world.launch
```  
2. Launch teleop_twist_keyboard node, open a new terminal, enter  
```
rosrun teleop_twist_keyboard teleop_twist_keyboard.py
```  
3. Launch GraphSLAM node for mapping, open a new terminal, enter  
```
roslaunch my_robot mapping.launch
```  

4. Testing  
Send move command via teleop package to control your robot and observe real-time visualization in the environment `rtabmapviz`.  

5. View database
Once you statisfied with your move, press `Ctrl + c` to exit then view your database with
```
rtabmap-databaseViewer ~/.ros/rtabmap.db
```
Remember to rename your `~/.ros/rtabmap.db` before your next attempt since it will be deleted due to the launch file setting in `mapping.launch`

6. To perform localization on your mapping run `localization.launch` node
```
roslaunch my_robot localization.launch
``` 

![gif](/Screenshots/slam5.gif)