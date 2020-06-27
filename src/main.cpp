#include "prototypes.h"
 
 
/* Declaration of variables / structures used by the game */
Input input;
 
 
int main(int argc, char *argv[])
{
    unsigned int frameLimit = SDL_GetTicks() + 16;
    
 
    // SDL initialization
    init((char*)"Bediako");
  
    // Loading resources (graphics, sounds)
    loadGame();  
 
    // Calls the cleanup function at the end of the program.
    atexit(cleanup);
 
    
 
    // Infinite loop, main, of the game
    while (true)
    {
        //Keyboard input management
        gestionInputs(&input);
 
        //We draw everything
        drawGame();
 
        // Management of 60 fps (1000ms/60 = 16.6 -> 16
        delay(frameLimit);
        frameLimit = SDL_GetTicks() + 16;
    }
 
    // We're leaving
    exit(0);
 
}