/*********************************************************************
** Program name: CS 162 Project 1
** Author: Sky Jacobson
** Date: 10/13/2019
** Description: Functions related to setting up the game
*********************************************************************/
// Menu.hpp is the Menu class specification file
#ifndef Menu_HPP
#define Menu_HPP
#include <iostream>
#include <string>
#include <sstream>

// Menu class declaration
class Menu
{
  private:
    std::string begin;      // Yes/No
  public:
    bool startPrompt(); // asks if user wants to play
    void quitGame(); // exits game
    void gameSetup();
    int askQuestion(std::string);
};
#endif
