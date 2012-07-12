// Taylor Seale, Ryan Shea, Iheanyi Ekechukwu, Andrew Caron
// Fundamentals of Computing II: Final Project
// background.h: This is the header file for the Background class which handles the background of the game

#include "SDL/SDL.h"
using namespace std;

class Background{

 public: 
  Background(const char *, SDL_Surface *); //takes name of background image
  void scroll(int, SDL_Surface *); //move image at inputted velocity
 private:
  int dx; //displacement of background image
  SDL_Surface *picture; //SDL pointer
};
