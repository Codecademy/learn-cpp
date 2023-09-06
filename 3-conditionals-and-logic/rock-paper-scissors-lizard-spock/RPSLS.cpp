/*
Rock, Paper, Scissors, Lizard, Spock Logic:

- Scissors cuts Paper.
- Paper covers Rock.
- Rock crushes Lizard.
- Lizard poisons Spock.
- Spock smashes Scissors.
- Scissors decapitate Lizard.
- Lizard eats Paper.
- Paper disproves Spock.
- Spock vaporizes Rock.
- Rock crushes Scissors.
*/

#include <iostream>
#include <stdlib.h>

int main(){
  int computer = rand() % 5 + 1;

  int user;

  std::cout <<
  "    ____             __      ____                           _____      _                          \n" <<
  "   / __ \\____  _____/ /__   / __ \\____ _____  ___  _____   / ___/_____(_)_____________  __________\n" <<
  "  / /_/ / __ \\/ ___/ //_/  / /_/ / __ `/ __ \\/ _ \\/ ___/   \\__ \\/ ___/ / ___/ ___/ __ \\/ ___/ ___/\n" <<
  " / _, _/ /_/ / /__/ ,<    / ____/ /_/ / /_/ /  __/ /      ___/ / /__/ (__  |__  ) /_/ / /  (__  ) \n" <<
  "/_/ |_|\\____/\\___/_/|_|  /_/    \\__,_/ .___/\\___/_/      /____/\\___/_/____/____/\\____/_/  /____/  \n" <<
  "                                    /_/                                                           \n\n";

  std::cout <<
  "1) 👊  Rock\n" <<
  "2) ✋  Paper\n" <<
  "3) ✌️  Scissors\n" <<
  "4) 🦎  Lizard\n" <<
  "5) 🖖  Spock\n" <<
  "Shoot!\n";

  std::cin >> user;

  std::cout << '\n';

  std::cout << "Computer chose: " << computer << '\n' <<
  "You chose: " << user << '\n';

  int who_won = (user - computer + 5) % 5;

  if (who_won != 0){
    if(who_won % 2 == 0){
      std::cout << "You Win!";
    } else {
      std::cout << "You Lose!";
    }
  } else {
    std::cout << "It's a Tie!";
  }

  std::cout << '\n';
}