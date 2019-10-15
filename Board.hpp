/*********************************************************************
** Program name: CS 162 Project 1
** Author: Sky Jacobson
** Date: 10/13/2019
** Description: Functions related to setting up the board
*********************************************************************/
// Board.hpp is the Board class specification file
#ifndef Board_HPP
#define Board_HPP
#include <string>
#include <iostream>
// #include "Ant.hpp"

// Board class declaration
class Board
{
  private:
  public:
    char **initializeBoard(int, int, int, int, int);
    void moveForward(char**, int, int);
    void printBoard(char**, int, int);
    char flipTile(char);
};
#endif
