// Taylor Seale, Iheanyi Ekechukwu, Ryan Shea, Andrew Caron
// Fundamentals of Computing II: Final Project
// scoreCounter.h: This is the header file for the scoreCounter class which controls the ingame score counter

#include "SDL/SDL.h"
#include "sprite.h"
#include <vector>
#include <string>

#ifndef SCORE_H
#define SCORE_H

class scoreCounter : public Sprite{
 public:
  scoreCounter(std::string,int,int,int);
  void apply_surface(int,int,SDL_Surface *,SDL_Surface *,SDL_Rect *);
  virtual void move();
  virtual void show(SDL_Surface *);
  virtual void set_clips();
  virtual int getOffSetX();
  virtual int getOffSetY();
  virtual int collision();
  virtual bool check_collision(int,int);
  void setScore(int);
  void setTitle(bool);
  bool getTitle();

protected:
  const int COUNT;
  int score;
  bool title;
  bool isStarted; 
};

#endif
