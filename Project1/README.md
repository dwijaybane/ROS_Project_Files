#Project1
![map](/screenshot/map3.png) 

## Overview  
In this project you'll create your simulation world in Gazebo for all upcoming projects.  
1. Build a single floor wall structure using the **Building Editor** tool in Gazebo. Apply at least one feature, one color, and optionally one texture to your structure. Make sure there's enough space between the walls for a robot to navigate.  
2. Model any object of your choice using the **Model Editor** tool in Gazebo. Your model links should be connected with joints.  
3. Import your structure and two instances of your model inside an empty **Gazebo World**.  
4. Import at least one model from the **Gazebo online library** and implement it in your existing Gazebo world.  
5. Write a C++ **World Plugin** to interact with your world. Your code should display “Welcome to ’s World!” message as soon as you launch the Gazebo world file. 

## Run the project  
1. At the top level of the project repository, create a build directory:  
```bash
mkdir build && cd build
```
2. In `/build` directory, compile your code with  
```bash
cmake ../ && make
```
3. Export your plugin folder in the terminal so your world file can find it: 
```bash
export GAZEBO_PLUGIN_PATH=${GAZEBO_PLUGIN_PATH}:<path_to_workspace>/ROS_Project_Files/Project1/build
```
Note: Make sure to substitute **<path_to_workspace>** where the repo is cloned.

4. Launch the world file in Gazebo to load both the world and plugin  
```bash
cd ROS_Project_Files/Project1/world/
gazebo officeWorld.world
```
 
![map2](/screenshot/map2.png) 