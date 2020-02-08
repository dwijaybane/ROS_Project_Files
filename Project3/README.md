#Project3
![Overview](/Screenshots/amcl3.gif)  

## Overview  
In this project you'll utilize ROS AMCL package to accurately localize a mobile robot inside a map in the Gazebo simulation environments. Here are the steps to learn several aspects of robotic software engineering with a focus on ROS:  
* Create a ROS package that launches a custom robot model in a custom Gazebo world  
* Utilize the ROS AMCL package and the Tele-Operation / Navigation Stack to localize the robot  
* Explore, add, and tune specific parameters corresponding to each package to achieve the best possible localization results  


## Run the project
1. Launch Gazebo and Rviz
```
roslaunch my_robot world.launch
```
In Rviz: File -> Open Config -> select **amcl.rviz**

2. Launch amcl node for localization
```
roslaunch my_robot amcl.launch
```

## Testing:
1. Send navigation goal via RViz.
2. Send move command via teleop package.

### Option1: Send 2D Navigation Goal
Your first option would be sending a 2D Nav Goal from RViz. The move_base will try to navigate your robot based on the localization. Based on the new observation and the odometry, the robot to further perform the localization.

Click the 2D Nav Goal button in the toolbar, then click and drag on the map to send the goal to the robot. It will start moving and localize itself in the process. If you would like to give amcl node a nudge, you could give the robot an initial position estimate on the map using 2D Pose Estimate.

### Option2: Use teleop Node
You could also use teleop node to control your robot and observe it localize itself in the environment, if you have set it up in the Optional: Teleop Package part.

Open another terminal and launch the teleop script:
```
rosrun teleop_twist_keyboard teleop_twist_keyboard.py
```
You could control your robot by keyboard commands now. 