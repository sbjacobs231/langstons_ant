// Ant.cpp is the Ant class function implementation file
#include "Ant.hpp"

char Ant::initializeOrientation()
{
  int orientation = rand() % 3;       // range 0 to 3
  switch(orientation)
  {
    case 0: return 'u';  // up
    case 1: return 'r';  // right
    case 2: return 'd';  // down
    case 3: return 'l';  // left
    default: return 'e'; // error
  }
}

int Ant::getAntNewXPosition(char orientation, int columns, int x)
{
  if (orientation == 'l') //left
  {
    if (x == 1) // out of left range
      x++;
    else
      x--;
  } else if (orientation == 'r') // right
  {
    if (x + 2 == columns) // out of right range
      x--;
    else
      x++;
  }
  return x;
}

int Ant::getAntNewYPosition(char orientation, int rows, int y)
{
  if (orientation == 'u') // up
  {
    if (y == 1) // out of upper range
      y++;
    else
      y--;
  } else if (orientation == 'd') // down
  {
    if (y + 2 == rows) // out of lower range
      y--;
    else
      y++;
  }
  return y;
}
