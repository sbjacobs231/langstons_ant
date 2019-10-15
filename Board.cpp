// Board.cpp is the Board class function implementation file
#include "Board.hpp"
// creates empty board with ant's starting position
char **Board::initializeBoard(int rows, int columns, int steps, int x, int y)
{
  std::cout << steps << " STEP" << std::endl;
  // loop through array and assign default values
  char **bArr = new char*[rows];;
  for (int i = 0; i < rows; i++)
  {
    bArr[i] = new char[columns];
    for (int j = 0; j < columns; j++)
    {
      if (i == 0 || i == rows - 1)
        bArr[i][j] = '-';
      else if (j == 0 || j == columns - 1)
        bArr[i][j] = '|';
      else if (i == y && j == x)
        bArr[i][j] = '*';
      else
        bArr[i][j] = ' ';
      std::cout << bArr[i][j];
    }
    std::cout << std::endl;
  }
  return bArr;
}
void Board::moveForward(char **board, int x, int y)
{
  // set new ant position
  board[y][x] = '*';
}
// print board after every step
void Board::printBoard(char**board, int rows, int columns)
{
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < columns; j++)
      std::cout << board[i][j];
    std::cout << std::endl;
  }
}
// flips tile of location ant was on
char Board::flipTile(char c)
{
  if (c == ' ')
    c = '#';
  else
    c = ' ';
  return c;
}
