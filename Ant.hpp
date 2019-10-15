/*********************************************************************
** Program name: CS 162 Project 1
** Author: Sky Jacobson
** Date: 10/13/2019
** Description: Functions related to ant position
*********************************************************************/
// Ant.hpp is the Ant class specification file
#ifndef Ant_HPP
#define Ant_HPP
#include <string>
#include <iostream>
#include <stdlib.h>   // srand, rand
#include <time.h>     // time

// Ant class declaration
class Ant
{
private:
  public:
    char initializeOrientation();
    void setOrientation();
    int getAntNewXPosition(char, int, int);
    int getAntNewYPosition(char, int, int);
};
#endif
