#include "prototypes.h"
#include <string>
 


void drawGame(void)
{
// Displays the background at coordinates (0,0)
drawImage(getBackground(), 0, 0);
 
/* Displays the tile map: layer 2 (bottom layer) */
drawMap(2);
 
/* Displays the tile map: layer 1 (active layer: soil, etc.)*/
drawMap(1);
 
/* Display tile map: layer 3 (foreground / front layer) */
drawMap(3);
 
// Displays the screen
SDL_RenderPresent(getrenderer());
 
// Time to let the process breathe
SDL_Delay(1);
}
 


void drawTile(SDL_Texture *image, int destx, int desty, int srcx, int srcy)
{
/* Destination rectangle to draw */
SDL_Rect dest;
 
dest.x = destx;
dest.y = desty;
dest.w = TILE_SIZE;
dest.h = TILE_SIZE;
 
/* Source rectangle */
SDL_Rect src;
 
src.x = srcx;
src.y = srcy;
src.w = TILE_SIZE;
src.h = TILE_SIZE;
 
/* Draws the selected tile on the screen at x and y coordinates */
SDL_RenderCopy(getrenderer(), image, &src, &dest);
}


 
SDL_Texture *loadImage(char *name)
{
	/* Loads images with SDL Image into a SDL_Surface */

	SDL_Surface *loadedImage = NULL;
	SDL_Texture *texture = NULL;
	loadedImage = IMG_Load(name);

	if (loadedImage != NULL)
	{
		// Image to Texture Conversion
		texture = SDL_CreateTextureFromSurface(getrenderer(), loadedImage);

		// Getting rid of the pointer to a surface
		SDL_FreeSurface(loadedImage);
		loadedImage = NULL;
	}
	else
		printf("The image couldn't be loaded! SDL_Error :  %s\n", SDL_GetError());

	return texture;
}

 
 
void drawImage(SDL_Texture *image, int x, int y)
{
 
SDL_Rect dest;
 
/* Sets the rectangle to be drawn according to the size of the source image */
dest.x = x;
dest.y = y;
 
/* Draws the entire image on the screen in x and y coordinates */
SDL_QueryTexture(image, NULL, NULL, &dest.w, &dest.h);
SDL_RenderCopy(getrenderer(), image, NULL, &dest);
 
}
 
 
void delay(unsigned int frameLimit)
{
    // Management of 60 fps (frames/second)
    unsigned int ticks = SDL_GetTicks();
 
    if (frameLimit < ticks)
    {
        return;
    }
 
    if (frameLimit > ticks + 16)
    {
        SDL_Delay(16);
    }
 
    else
    {
        SDL_Delay(frameLimit - ticks);
    }
}