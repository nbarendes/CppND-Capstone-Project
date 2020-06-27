# CppND-Capstone-Bediako-Game
This project is the Capstone project for Udacity's C++ NanoDegree program [Udacity C++ Nanodegree Program](https://www.udacity.com/course/c-plus-plus-nanodegree--nd213).

The project is a a platform game. Once you follow the instructions below to compile, build, and run the project, you can start playing imidiately. 

## File and function

 File name : ```defs.h```
 Ce premier fichier contient toutes les définitions de notre jeu , utiles pour le préprocesseur à la compilation ainsi que les en-têtes des bibliothèques à inclure.
 
 File name : ```structs.h```
 Ce fichier contient toutes les structures utilisées par notre jeu
 1. ```typedef struct Input``` Structure pour gérer l'input (clavier puis joystick)
 2. ```typedef struct Map ```Structure pour gérer la map à afficher
 3. ```typedef struct GameObject ```Structure pour gérer nos sprites
 
 File name : ```main.cpp```
 il contient déjà l'ossature de notre jeu.
 le fichier n'a pas d'en-tête (```main.h```) mais plutôt il fait appel à un fichier ```prototypes.h```
 
 File name : ```map.cpp```
 Ce fichier est charger de gérer notre map
 fonctions : 
 1. ```initMaps()``` se chargera d'initialiser toutes les variables nécessaires au bon fonctionnement de notre map
 2. ```SDL_Texture *getBackground(void)``` renvoie simplement la texture du background
 3. ```cleanMaps()``` fera le ménage à la fin du programme en supprimant de la mémoire notre fichier map.background.
 4. ```void loadMap(char *name)``` charge la map
 5. ```void drawMap(int layer)```  Affiche la map de tiles de layer 1/2/3
 6. ```void changeLevel(void)``` chargera le niveau
 7. ```int getStartX(void)``` accede au point de départ x à partir duquel on doit dessiner la map.
 8. ```void setStartX(int valeur)``` modifie le  point de départ x à partir duquel on doit dessiner la map.
 9. ```int getStartY(void)``` accede au point de départ y à partir duquel on doit dessiner la map.
 10. ```void setStartY(int valeur)``` modifie le  point de départ y à partir duquel on doit dessiner la map.
 11. ```int getMaxX(void)``` accede au point de coordonnée x  de la fin de la map
 12. ```int getMaxY(void)``` accede au point de coordonnée y  de la fin de la map
 13. ```int getBeginX(void)``` affiche la coordonnée x du point de départ du personnage
 14. ```int getBeginY(void)``` affiche la coordonnée x du point de départ du personnage
 15. ```void mapCollision(GameObject *entity)```
 
 
 File name : ```prototypes.h```
 ce fichier prototypes.h contient la liste de tous les prototypes
 
 File name : ```init.cpp```
  Ce fichier contient 4 fonctions :
  1. ```SDL_Renderer *getrenderer(void)``` le renderer
  2. ```void loadGame()```  charge notre jeu
  2. ```void init(char *title)``` initialise la SDL 2 et ses libs
  3. ```void cleanup()``` libère la mémoire occupée par window et le renderer
  
  File namer : ```input.cpp```
  ce fichier contient notre fonction de détection des entrées clavier
  
  File name : ```draw.cpp```
  Ce fichier contient la suite nos fonctions essentielles de dessin et de traitement des images 
  1. ```drawGame()``` affiche les 3 couches de la map dans l'ordre (couche 1 = action, couche 2 = background et couche 3 = foreground)
  2. ```void drawTile() ```découpe le tileset pour afficher uniquement la bonne tile
  3. ```SDL_Texture *loadImage()```
  4. ```oid drawImage(SDL_Texture *image, int x, int y)```
  5. ```void delay(unsigned int frameLimit)```
  
  File name : ```player.cpp```
  ce fichier contient les fonctions essentielles pour la création et l'utilisation du joueur 
  1. ```GameObject *getPlayer(void)``` Renvoie le GameObject player
  2.```int getPlayerx(void)``` position x du joueur
  3. ```int getPlayery(void)``` position y du joueur
  4. ```void setPlayerx(int valeur)``` modification de la position x du joueur
  5. ```void setPlayery(int valeur)``` modification de la position y du joueur 
  6. ```int getLevel(void)``` Renvoie le numéro du niveau en cours
  7. ```void SetValeurDuNiveau(int valeur)``` Change la valeur du niveau en cours
  8. ```void initPlayerSprites(void)``` Charge la spritesheet du joueur
  9. ```void cleanPlayer(void)``` Libère le sprite du héros à la fin du jeu
  10. ```void initializePlayer(int newLevel)``` initialisation du joueur
  11. ```void drawPlayer(void)``` affiche le joueur 
  12. ```void updatePlayer(Input *input)``` mise a jour de la position du joueur 
  13. ```void centerScrollingOnPlayer(void)``` gére la caméra et le scrolling
 
 
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
