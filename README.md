# CppND-Capstone-Bediako-Game
This project is the Capstone project for Udacity's C++ NanoDegree program [Udacity C++ Nanodegree Program](https://www.udacity.com/course/c-plus-plus-nanodegree--nd213).

The project is a a platform game. Once you follow the instructions below to compile, build, and run the project, you can start playing imidiately. 

## File and function

 * File name: ```defs.h```<br>
 This first file contains all the definitions of our game, useful for the compilation preprocessor as well as the headers of the libraries to be included.
 
 
 * File name: ```structs.h```<br>
 This file contains all the structures used by our game
 1. ```typepedef struct``` Input Structure to manage keyboard input
 2. ```typedef struct Map ``` Structure to manage the map to be displayed
 3. ```typeef struct GameObject ``` Structure to manage our sprites
 
 * File name: ``main.cpp``<br>
 it already contains the backbone of our game.
 the file does not have a header (``main.h``) but rather uses a ``prototypes.h`` file.
 
 * File name: ```map.cpp```<br>
 This file is in charge of managing our map
 functions : 
 1. ```initMaps``` will initialize all the variables necessary for the proper functioning of our map.
 2. ```SDL_Texture *getBackground``` simply returns the texture of the background.
 3. ```cleanMaps()``` will clean up at the end of the program by deleting our map.background file from memory.
 4. ```void loadMap(char *name)*``` loads the map.
 5. ```void drawMap(int layer)``` displays the tile map of layer 1/2/3.
 6. ```void changeLevel()``` will load the level
 7. ```int getStartX()``` accesses the starting point x from which the map is to be drawn.
 8. ```void setStartX(int value)```changes the starting point x from which the map is to be drawn.
 9. ```int getStartY()``` accesses the starting point y from which to draw the map.
 10. ```void setStartY(int value)``` changes the starting point y from which the map should be drawn.
 11. ```int getMaxX()``` accesses the x-coordinate point of the end of the map.
 12. ```int getMaxY()``` accesses the y-coordinate point at the end of the map.
 13. ```int getBeginX()```displays the x-coordinate of the starting point of the character.
 14. ```int getBeginY()```displays the x-coordinate of the starting point of the character.
 15. ```void mapCollision(GameObject *entity)*```
 
 
 * File name: ```prototypes.h```<br>
 this prototypes.h file contains the list of all prototypes
 
 * File name: ```init.cpp```<br>
  This file contains 4 functions :
  1. ```SLD_Renderer *getrenderer()``` render it
  2. ```void loadGame()``` load our game
  2. ```void init(char *title)``` initializes SDL 2 and its libs.
  3. ```void cleanup()``` releases the memory occupied by window and renders it
  
  * File name: ```input.cpp```<br>
  This file contains our keyboard input detection function.
  
  * File name: ```draw.cpp```<br>
  This file contains the following our essential drawing and image processing functions 
  1. ```dragGame()```displays the 3 layers of the map in order (layer 1 = action, layer 2 = background and layer 3 = foreground)
  2. ```void drawTile()``` cuts the tileset to display only the correct tile.
  3. ```SLD_Texture *loadImage()*```
  4. ```oid drawImage(SDL_Texture *image, int x, int y)```
  5. ```void delay(unsigned int frameLimit)```
  
  * File name: ```player.cpp```<br>
  this file contains the essential functions for the creation and use of the player 
  1. ```GameObject *getPlayer(void)``` Returns the GameObject player.
  2. ```int getPlayerx()```player's x position 
  3. ```int getPlayery()``` player's y position 
  4. ```void setPlayerx(int value)```changing player's x position
  5. ```void setPlayery(int value)```changing the player's y-position 
  6. ```int getLevel()``` Returns the number of the current level.
  7. ```void SetLevelValue(int value)```Changes the value of the current level.
  8. ```void initPlayerSprites()```Loads the player spritesheet
  9. ```void cleanPlayer()```releases the hero sprite at the end of the game.
  10. ```void initializePlayer(int newLevel)```player initialization
  11. ```void drawPlayer()``` displays the player 
  12. ```void updatePlayer(Input *input)``` update player position 
  13. ```void centerScrollingOnPlayer()``` manages camera and scrolling


 
 
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

[esc] - exit<br>
[arrow left] - move left<br>
[arrow right] - move right<br>
[space] - move up<br>
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
