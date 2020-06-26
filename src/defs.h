
#ifndef DEF_DEFS
#define DEF_DEFS
 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <SDL2/SDL.h>
 
/* On inclut les libs supplémentaires */
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>
#include <SDL2/SDL_mixer.h>
 
// Window size: 800x480 pixels 
#define SCREEN_WIDTH 800
#define SCREEN_HEIGHT 480

/* Maximum size of the map: 400 x 150 tiles */
#define MAX_MAP_X 400
#define MAX_MAP_Y 150
 
/* Tile size (32 x 32 pixels) */
#define TILE_SIZE 32
 
/* Animation constants */
#define TIME_BETWEEN_2_FRAMES 20
 
#endif