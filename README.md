# ROS_Project_Files

## Project 1 - Gazebo World: Build My World
- Robot simulation is an essential tool in every roboticist’s toolbox. A well-designed simulator makes it possible to rapidly test algorithms, design robots, perform regression testing, and train AI systems using realistic scenarios. Here we will begin by prototyping robots in the Gazebo simulator. Gazebo offers the ability to accurately and efficiently simulate populations of robots in complex indoor and outdoor environments.
- In this project, we will work with Gazebo to simulate the inside and outside of a one-floor environment that will house your future robot. As we do so, we will gain proficiency with Gazebo, and with C++ plugins.  
![Proj1](/Project1/screenshot/map1.png)

## Project 2 - ROS Essentials: Go Chase It!
- In this second module, we will tackle the Robot Operating System (ROS), beginning with an architectural overview of the Robot Operating System Framework. Learn about ROS workspace structure, essential command line utilities, and how to manage software packages within a project. Harnessing these skills will be key to building shippable software using ROS. Following this, we will explore ROS Nodes, which are a key abstraction that allows a robot system to be built modularly. We will be writing nodes in C++ to control a robotic arm in Gazebo.
- In this project, we’ll use ROS to design and build a mobile robot. Then, we will house our new robot in the environment built in our first project. Eventually, we will program your robot with C++ and ROS to chase a ball through this environment. As we work to successfully complete this project, we’ll acquire skills in: ROS catkin workspaces, ROS packages, ROS nodes, ROS launch files, RViz integration, and C++. 
![Proj2](/Project2/screenshot/ballchase1.gif)

## Project 3 - Localization: Where Am I
- In this third module, we will learn to use probabilistic localization algorithms to estimate a robot’s position and orientation. First, we will learn what it means to localize and gain an understanding of the challenges inherent to the process. Next, we will learn what a Kalman filter is, and understand its importance in estimating noisy data. Inside a lab, we will implement an Extended Kalman Filter package with ROS to estimate the position of a robot. We will then learn the MCL (Monte Carlo Localization) algorithm to localize robots. Finally, we will code the MCL algorithm in C++.

- In this project, we will develop an autonomous driving system to localize our robot. First, we will write a C++ node that will navigate our robot through a series of waypoints. Then we will localize it with an AMCL localization package in ROS. Accomplishing this will involve gaining skills in: Localization algorithms, Kalman Filter and MCL, ROS parameters, ROS packages integration, and C++.
![Proj3](/Project3/Screenshots/amcl3.gif)

## Project 4 - Mapping and SLAM: Map My World
- In the fourth module, we will study mapping algorithms. By combining mapping with the skills you learned in the previous three lessons, you’ll be able to implement Simultaneous Localization and Mapping, commonly referred to by its acronym: SLAM. We will first learn the occupancy grid mapping algorithm, and code it with C++. Then, we will learn how to simultaneously map an environment and localize a robot relative to the map with the Grid-based FastSLAM algorithm. We will then apply what we’ve learned to interface a turtlebot with a Grid-based FastSLAM package with ROS to map an environment. Finally, we will learn how to simultaneously map an environment and localize a robot relative to the map with the GraphSLAM algorithm.

- In this project, we will use an RTAB-Map SLAM package with ROS to simultaneously localize our robot and create 2D and 3D maps of our world. We will gain skills in: Mapping and SLAM algorithms, Occupancy Grid Mapping, Grid-based FastSLAM and GraphSLAM, ROS debugging tools, and C++. 
![Proj4](/Project4/Screenshots/slam5.gif)

## Project 5 - Path Planning and Navigation: Home Service Robot
- Finally, in this fifth module, we will learn how to search for a path and navigate it with classical, sample-based, and probabilistic algorithms. First, we will learn a number of classic path planning approaches that can be applied to low-dimensional robotic systems. Then, we will code the BFS and A* algorithms in C++. Next, we will learn about sample-based and probabilistic path planning, and how they can improve on the classic approach.

- In this project, we will integrate everything we’ve learned to build a home service robot that will navigate to pick up and deliver objects inside a world of our own creation! We will gain skills in Path Planning search algorithms, ROS navigation stack, and C++.
