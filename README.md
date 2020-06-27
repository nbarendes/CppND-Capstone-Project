# CppND-Capstone-Ping-Pong-Game
This project is the Capstone project for Udacity's C++ NanoDegree program [Udacity C++ Nanodegree Program](https://www.udacity.com/course/c-plus-plus-nanodegree--nd213).

The project is a a platform game. Once you follow the instructions below to compile, build, and run the project, you can start playing imidiately. 

## Class Diagram
<img src="Pics/class_diagram.jpg"/>

## Dependencies for Running Locally
* cmake >= 3.7
  * All OSes: [click here for installation instructions](https://cmake.org/install/)
* make >= 4.1 (Linux, Mac), 3.81 (Windows)
  * Linux: make is installed by default on most Linux distros
  * Mac: [install Xcode command line tools to get make](https://developer.apple.com/xcode/features/)
  * Windows: [Click here for installation instructions](http://gnuwin32.sourceforge.net/packages/make.htm)
* SDL2 >= 2.0
  * All installation instructions can be found [here](https://wiki.libsdl.org/Installation)
  * Note that for Linux, an `apt` or `apt-get` installation is preferred to building from source.
* gcc/g++ >= 5.4
  * Linux: gcc / g++ is installed by default on most Linux distros
  * Mac: same deal as make - [install Xcode command line tools](https://developer.apple.com/xcode/features/)
  * Windows: recommend using [MinGW](http://www.mingw.org/)


## Install additionnal dependencies (on Linux)

* TrueType Font library for Simple DirectMedia Layer 2
```
   sudo apt-get install libsdl2-ttf-dev
```
* Image loading library for Simple DirectMedia Layer 2
```
   sudo apt-get install -y libsdl2-image-dev
```
* Mixer library for Simple DirectMedia Layer 2
```  
  sudo apt-get install libsdl2-mixer-dev
 ```   

    

## Basic Build Instructions

1. Clone this repo.
2. Go to the 'build' directory: `cd build`
3. Compile: `cmake .. && make`
4. Run it: `./Bediako`.

## How to play

Key bindings<br>

[esc] - exit
[arrow left] - move left
[arrow right] - move right
[space] - move up
[arrow down] - move down <br>


## Capstone Project Rubic Points
### Compileing and testing
- [X] The project code must compile and run without errors

### Loops, Functions, I/O
- [X] A variety of control structures are used in the project. The project code is clearly organized into functions.
- [ ] The project reads data from an external file or writes data to a file as part of the necessary operation of the program.
- [ ] The project accepts input from a user as part of the necessary operation of the program.

### Object Oriented Programming
- [X] The project code is organized into classes with class attributes to hold the data, and class methods to perform tasks.
- [X] All class data members are explicitly specified as public, protected, or private.
- [ ] All class members that are set to argument values are initialized through member initialization lists.
- [X] All class member functions document their effects, either through function names, comments, or formal documentation. Member functions do not change program state in undocumented ways.
- [X] Appropriate data and functions are grouped into classes. Member data that is subject to an invariant is hidden from the user. State is accessed via member functions.
- [X] Inheritance hierarchies are logical. Composition is used instead of inheritance when appropriate. Abstract classes are composed of pure virtual functions. Override functions are specified.
- [ ] One function is overloaded with different signatures for the same function name.
- [ ] One member function in an inherited class overrides a virtual base class member function.
- [ ] One function is declared with a template that allows it to accept a generic parameter.

### Memory Management
- [X] At least two variables are defined as references, or two functions use pass-by-reference in the project code.
- [X] At least one class that uses unmanaged dynamically allocated memory, along with any class that otherwise needs to modify state upon the termination of an object, uses a destructor.
- [ ] The project follows the Resource Acquisition Is Initialization pattern where appropriate, by allocating objects at compile-time, initializing objects when they are declared, and utilizing scope to ensure their automatic destruction.
- [ ] For all classes, if any one of the copy constructor, copy assignment operator, move constructor, move assignment operator, and destructor are defined, then all of these functions are defined.
- [ ] For classes with move constructors, the project returns objects of that class by value, and relies on the move constructor, instead of copying the object.
- [ ] The project uses at least one smart pointer: unique_ptr, shared_ptr, or weak_ptr. The project does not use raw pointers.

### Concurrency
- [ ] The project uses multiple threads in the execution.
- [ ] A promise and future is used to pass data from a worker thread to a parent thread in the project code.
- [ ] A mutex or lock (e.g. std::lock_guard or `std::unique_lock) is used to protect data that is shared across multiple threads in the project code.
- [ ] A std::condition_variable is used in the project code to synchronize thread execution.
