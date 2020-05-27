#include <iostream>
#include <ctime>    // For time()
#include <cstdlib>  // For srand() and rand()
#include "ufo_functions.hpp"


void playgame()
{
  // Greet the player
  greet();
  
  
  // Initialise the required variables
  std::vector<std::string> codewords = {"spaceship", "aliens", "starwars", "startrek", "bigbang", "planet", "abduction", "cornfield"};
  srand(time(NULL));
  int random_num = (rand() % codewords.size());
  std::string answer;
	std::string codeword = codewords[random_num]; 
  for (int i=0; i<codeword.size(); i++)
  {
    answer.append("_");
  }
  int misses = 0;
  std::vector<char> incorrect;
  bool guess = false;
  char letter;
  
  // The game continues unless the codeword is correctly guessed or player is abducted at 7 misses
  while (answer != codeword && misses < 7)
  {
    display_misses(misses);
    display_status(incorrect, answer);
    std::cout << "\nPlease enter your guess: ";
    std::cin >> letter;
    letter = tolower(letter);
    
    for (int i=0; i<codeword.size(); i++)
    {
      if(letter == codeword[i])
      {
        answer[i] = letter;
        guess = true;
      }
    }
    
    if (guess)
    {
      std::cout << "\nCorrect!\n";
    }
    
    else
    {
      std::cout << "\nIncorrect! The tractor beam pulls the person in further.\n";
      incorrect.push_back(letter);
      misses++;
    }
    
    guess = false;
  }
  endgame(answer, codeword);  
}

int main() {
  // Wrapper around the main game logic for replaying the game
  char playagain = 'y';
  while (playagain == 'y')
  {
    playgame();
    if(playagain == 'y')
    {
      std::cout << "\nWould you like to play again? [y/n] ";
      std::cin >> playagain;
    }
  }
}
