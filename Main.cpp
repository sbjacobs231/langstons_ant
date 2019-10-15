/*********************************************************************
** Program name: CS 162 Project 1
** Author: Sky Jacobson
** Date: 10/13/2019
** Description: Langstons Ant
enter make in command line
enter ./output in command line
*********************************************************************/
#include <iostream>
using namespace std;

#include <string>
#include "Ant.hpp"
#include "Menu.hpp"
#include "Board.hpp"

int main()
{
  bool continueGame = true;
  while(continueGame)
  {
    /* =======  VARIABLES =========*/
    int steps = 0; // taken from user input and counted down
    int rows = 0; // should two extra for up/down border
    int columns = 0; // ditto for left/right
    struct occupiedTile{ // tile information of ant's location
      int x = 0,  // tile column
          y = 0;  // tile row
      char c; // tile color
    } prevOccTile, occTile;
    char antOrientation; // ant's orientation
    char **boardArr; // board
    Menu menu;
    Ant ant;
    Board board;
    /* =======  END VARIABLES =========*/
    /* ======= GAME SETUP =============*/
    if (menu.startPrompt() == false) // prompt user to play game
    {
      continueGame = false;
      break; // user quit
    }
    // start game get user prompts
    while(steps < 1)
      steps = menu.askQuestion("Enter the ant's number of steps.");
    while(rows < 3)
      rows = menu.askQuestion("Enter the number of rows for the board.") + 2;
    while(columns < 3)
      columns = menu.askQuestion("Enter the number of columns for the board.") + 2;
    while(occTile.y < 1 || occTile.y >= rows)
      occTile.y = menu.askQuestion("Enter the starting row for the ant.");
    while(occTile.x < 1 || occTile.x >= columns)
      occTile.x = menu.askQuestion("Enter the starting column for the ant.");
    occTile.c = ' '; // on initialization occupied tile is white
    // print first step
    boardArr = board.initializeBoard(rows, columns, steps, occTile.x, occTile.y);
    /*======= END GAME SETUP ========*/
    while(steps > 1)
    {
      antOrientation = ant.initializeOrientation();
      // keep track of the color of the tile the ant is on before it moves
      prevOccTile.x = occTile.x; // getting ready for new occTile assignment
      prevOccTile.y = occTile.y;
      prevOccTile.c = occTile.c;
      prevOccTile.c = board.flipTile(prevOccTile.c); // flip prev occTile
      boardArr[prevOccTile.y][prevOccTile.x] = prevOccTile.c; // assign flipped tile into arr
      /* === ant takes a step === */
      // assign ant position to occTile structure to track tile color before ant steps
      occTile.x = ant.getAntNewXPosition(antOrientation, columns, occTile.x);
      occTile.y = ant.getAntNewYPosition(antOrientation, rows, occTile.y);
      occTile.c = boardArr[occTile.y][occTile.x];
      board.moveForward(boardArr, occTile.x, occTile.y);
      steps--; // reduce step
      std::cout << steps << " STEP" << std::endl;
      board.printBoard(boardArr, rows, columns);
    }
  }
  return 0;
}
