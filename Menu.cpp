// Menu.cpp is the Menu class function implementation file
#include "Menu.hpp"

bool Menu::startPrompt() // asks user if they want to play
{
  std::cout << "Would you like to start a game (yes/no)?" << std::endl;
  std::getline(std::cin, begin, '\n');
  if (begin == "yes")
    return true;
  else if (begin == "no")
  {
    Menu::quitGame();
    return false;
  }
  else
  {
    std::cout << "Invalid input." << std::endl; // user did not type yes or no
    Menu::startPrompt();
    return true;
  }
}

void Menu::quitGame()
{
  std::cout << "You quit the game." << std::endl;
}

int Menu::askQuestion(std::string q)
{
  std::string temp;
  std::cout << q << std::endl; // ask question
  std::getline(std::cin, temp); // user input
  int v = std::stoi(temp);
  return v;
}
