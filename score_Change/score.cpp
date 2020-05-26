#include <iostream>
#include <string>

int main ()
{
  int score;
  score = 8;

  std::cout << ": This is the origional score! \n";
  std::cout << "What is the score you want? ";
  std::cin >> score;
  std::cout << score << ": This is the current score ";
}




