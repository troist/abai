Angry Birds Physics Simulator
=============================

A simulator for Angry Birds style physics (launching a projectile at a dynamic structure) built on the Box2D engine (used by Angry Birds). It is a module of a university project at the University of Leeds to create an AI agent capable of playing Angry Birds and getting the highest score possible.

Useful code is under /Testbed/Tests

Building Information
--------------------
In Visual Studio open the project under /Build/vs2010 and set Testbed 

For GCC:
1. Delete everything in /Build (if there is anything)
2. Open /Build in a terminal
3. Type "cmake .."
4. Type "make"
5. Execute ./Testbed/Testbed

Note: C++11 (previously known as C++0x) compiler support required. Available on GCC 4.6.3+ and Visual Studio 2012.

Testbed Information
-------------------

The GUI comes from the Testbed tool, and all useful code is currently contained under that project. For Visual Studio set Testbed as your startup project.

### Commands

The commands available in Testbed are:

* 'w', 'a', 's' and 'd' to move the launch vector
* 'e' to shoot
* 'r' to reset
* 'x' and 'z' or the mouse wheel to zoom in/out
* left click to drag objects
* right click to move camera

Developer Notes
---------------

### Usage Information

The main component is built in C++, with C++11 features (vector functionality).

Python is used for two scripts to generate the Level object, and to generate ObjectStaticsClass.h. These take JSON files and translate them to the C++ class structure for the project.


### To Do

* Add polygon initialising support (will use vectors of int[2]), need to work out how to initialise the polygons in ObjectStaticsClass.h.
* Fine tune parameters in physics.
* Add damage to blocks, uses Material->strength, Material->defense and Object->maxHealth. 
* Add bird loading.
* Accelerate the simulation and then create a command line interface to run a simulation with no GUI.

Credits
-------

Project built by Edward Worthy (physics simulation and brute force approach), Vilius Narbutas (KR based AI agent) and Alex Hawdon (vision component).

Thanks to Brandon Bennett as our supervisor.

Thanks to Erin Catto for building the Box2D physics engine.


