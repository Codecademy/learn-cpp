/* As Sheldon explains, "Scissors cuts paper, paper covers rock,
rock crushes lizard, lizard poisons Spock, Spock smashes scissors,
scissors decapitates lizard, lizard eats paper, paper disproves Spock,
Spock vaporizes rock, and as it always has, rock crushes scissors."
*/

#include <iostream>
#include <stdlib.h>
#include <ctime>

int main() {

  // Get computer selection
  srand (time(NULL));
  int computer = rand() % 5 + 1;

  int user;

  std::cout << "1) Rock\n";
  std::cout << "2) Paper\n";
  std::cout << "3) Scissors\n";
  std::cout << "4) Lizard\n";
  std::cout << "5) Spock\n";
  std::cout << "Choose your weapon: ";
  std::cin >> user;

  switch (user) {
    case 1: // Human chooses Rock
      switch (computer) {
        case 1: // Computer chooses Rock
          std::cout << "You tie! You both chose Rock!\n";
          break;
        case 2: // Computer chooses Paper
          std::cout << "Computer wins! Paper covers Rock!\n";
          break;
        case 3: // Computer chooses Scissors
          std::cout << "You win! Rock crushes Scissors!\n";
          break;
        case 4: // Computer chooses Lizard
          std::cout << "You win! Rock crushes Lizard!\n";
          break;
        case 5: // Computer chooses Spock
          std::cout << "Computer wins! Spock vaporizes Rock!\n";
          break;
        default: // Something went wrong with rand
          std::cout << "Computer tried to cheat!?!\n";
          break;
      }
      break;
    case 2: // Human chooses Paper
      switch (computer) {
        case 1: // Computer chooses Rock
          std::cout << "You win! Paper covers Rock!\n";
          break;
        case 2: // Computer chooses Paper
          std::cout << "You tie! You both chose Paper!\n";
          break;
        case 3: // Computer chooses Scissors
          std::cout << "Computer wins! Scissors cuts Paper!\n";
          break;
        case 4: // Computer chooses Lizard
          std::cout << "Computer wins! Lizard eats Paper!\n";
          break;
        case 5: // Computer chooses Spock
          std::cout << "You win! Paper disproves Spock!\n";
          break;
        default: // Something went wrong with rand
          std::cout << "Computer tried to cheat!?!\n";
          break;
      }
      break;
    case 3: // Human chooses Scissors
      switch (computer) {
        case 1: // Computer chooses Rock
          std::cout << "Computer wins! Rock crushes Scissors!\n";
          break;
        case 2: // Computer chooses Paper
          std::cout << "You win! Scissors cuts Paper!\n";
          break;
        case 3: // Computer chooses Scissors
          std::cout << "You tie! You both chose Scissors!\n";
          break;
        case 4: // Computer chooses Lizard
          std::cout << "You win! Scissors decapitates Lizard!\n";
          break;
        case 5: // Computer chooses Spock
          std::cout << "Computer wins! Spock smashes Scissors!\n";
          break;
        default: // Something went wrong with rand
          std::cout << "Computer tried to cheat!?!\n";
          break;
      }
      break;
    case 4: // Human chooses Lizard
      switch (computer) {
        case 1: // Computer chooses Rock
          std::cout << "Computer wins! Rock crushes Lizard!\n";
          break;
        case 2: // Computer chooses Paper
          std::cout << "You win! Lizard eats Paper!\n";
          break;
        case 3: // Computer chooses Scissors
          std::cout << "Computer wins! Scissors decapitates Lizard!\n";
          break;
        case 4: // Computer chooses Lizard
          std::cout << "You tie! You both chose Lizard!\n";
          break;
        case 5: // Computer chooses Spock
          std::cout << "You win! Lizard poisons Spock!\n";
          break;
        default: // Something went wrong with rand
          std::cout << "Computer tried to cheat!?!\n";
          break;
      }
      break;
    case 5: // Human chooses Vulcan
      switch (computer) {
        case 1: // Computer chooses Rock
          std::cout << "You win! Spock vaporizes Rock!\n";
          break;
        case 2: // Computer chooses Paper
          std::cout << "Computer wins! Paper disproves Spock!\n";
          break;
        case 3: // Computer chooses Scissors
          std::cout << "You win! Spock smashes Scissors!\n";
          break;
        case 4: // Computer chooses Lizard
          std::cout << "Computer wins! Lizard poisons Spock!\n";
          break;
        case 5: // Computer chooses Spock
          std::cout << "You tie! You both chose Spock!\n";
          break;
        default: // Something went wrong with rand
          std::cout << "Computer tried to cheat!?!\n";
          break;
      }
      break;
    default: // Human chose outside 1-5 range
      std::cout << "Did you try to cheat?!\n";
      break;
  }

  std::cout << "Thank you for playing. Put me in a loop to play more!\n";

  return 0;

}
