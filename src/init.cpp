#include "prototypes.h"
 
 
SDL_Window *screen;
SDL_Renderer *renderer;
 
 
SDL_Renderer *getrenderer(void)
{
    return renderer;
}
 
 
void init(char *title)
{
    /* The window, represented by the pointer jeu.window, is created using the width and width of the window.
    height defined in the defines (defs.h). */
 
    screen = SDL_CreateWindow(title,
                                  SDL_WINDOWPOS_CENTERED,
                                  SDL_WINDOWPOS_CENTERED,
                                  SCREEN_WIDTH, SCREEN_HEIGHT,
                                  SDL_WINDOW_SHOWN);
 
    //We create a renderer for the SDL and activate the vertical sync: VSYNC
    renderer = SDL_CreateRenderer(screen, -1, SDL_RENDERER_PRESENTVSYNC);
 
    // If you can't do this, exit by recording the error in stdout.txt.
    if (screen == NULL || renderer == NULL)
    {
        printf("Impossible d'initialiser le mode écran à %d x %d: %s\n", SCREEN_WIDTH,
                                                                    SCREEN_HEIGHT, SDL_GetError());
        exit(1);
    }
 
    //Initialize loading png images with SDL_Image 2
    int imgFlags = IMG_INIT_PNG;
    if( !( IMG_Init( imgFlags ) & imgFlags ) )
    {
        printf( "SDL_image n'a pu être initialisée! SDL_image Error: %s\n", IMG_GetError() );
        exit(1);
    }
 
    // The mouse cursor is hidden
    SDL_ShowCursor(SDL_DISABLE);
 
    //We initialize SDL_TTF 2 which will handle the writing of text
    if (TTF_Init() < 0)
    {
        printf("Impossible d'initialiser SDL TTF: %s\n", TTF_GetError());
        exit(1);
    }

 
}

 
 void loadGame(void)
{
  //We load the data for the map
  initMaps();
   
  //We start at the first level
  SetValeurDuNiveau(1);
  changeLevel();
}
 
void cleanup()
{

  cleanMaps();
}