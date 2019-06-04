#include <iostream>
#include <stdlib.h>

int main() {
  
  std::cout << "Let's play Rock, Paper, Scissors, Lizard, Spock!\nThank you, The Big Bang Theory!\n\n";
  
  int player1;

  std::cout << "Select:\n  1) Rock\n  2) Paper\n  3) Scissors\n  4) Lizard\n  5) Spock\n";
  std::cin >> player1;
  
  srand(time(NULL));
  int player2 = rand() % 5 + 1;
  
  std::cout << "\n";

  if (player1 != 1 && player1 != 2 && player1 != 3 && player1 != 4 && player1 != 5) {
    
    std::cout << "Wrong input, dude. Choose 1, 2, 3, 4 or 5: ";
    std::cin >> player1;

    std::cout << "\n";
    
  }
  
  if (player1 == player2) {

    std::cout << "It's a draw.\n";

  }
  
  if (player1 == 1) {

    if (player2 == 2) {
      std::cout << "Paper covers Rock. Computer Wins!\n";
    }
    else if (player2 == 3) {
      std::cout << "Rock smashes Scissors. You Win!\n";
    }
    else if (player2 == 4) {
      std::cout << "Rock crushes Lizard. You Win!\n";
    }
    else if (player2 == 5) {
      std::cout << "Spock vaporizes Rock. Computer Wins!\n";
    }

  }
  else if (player1 == 2) {

    if (player2 == 1) {
      std::cout << "Paper covers Rock. You Win!\n";
    }
    else if (player2 == 3) {
      std::cout << "Scissors cuts Paper. Computer Wins!\n";
    }
    else if (player2 == 4) {
      std::cout << "Lizard eats Paper. Computer Wins!\n";
    }
    else if (player2 == 5) {
      std::cout << "Paper disproves Spock. You Win!\n";
    }

  }
  else if (player1 == 3) {

    if (player2 == 1) {
      std::cout << "Rock crushes Scissors. Computer Wins!\n";
    }
    else if (player2 == 2) {
      std::cout << "Scissors cuts Paper. You Win!\n";
    }
    else if (player2 == 4) {
      std::cout << "Scissors decapitate Lizard. You Win!\n";
    }
    else if (player2 == 5) {
      std::cout << "Spock smashes Scissors. Computer Wins!\n";
    }

  }
  else if (player1 == 4) {

    if (player2 == 1) {
      std::cout << "Rock crushes Lizard. Computer Wins!\n";
    }
    else if (player2 == 2) {
      std::cout << "Lizard eats Paper. You Win!\n";
    }
    else if (player2 == 3) {
      std::cout << "Scissors decapitate Lizard. Computer Wins!\n";
    }
    else if (player2 == 5) {
      std::cout << "Lizard poisons Spock. You Win!\n";
    }

  }
  else if (player1 == 5) {

    if (player2 == 1) {
      std::cout << "Spock vaporizes Rock. You Win!\n";
    }
    else if (player2 == 2) {
      std::cout << "Paper disproves Spock. Computer Wins!\n";
    }
    else if (player2 == 3) {
      std::cout << "Spock smashes Scissors. You Win!\n";
    }
    else if (player2 == 4) {
      std::cout << "Lizard poisons Spock. Computer Wins!\n";
    }

  }
  
  return 0;
  
}