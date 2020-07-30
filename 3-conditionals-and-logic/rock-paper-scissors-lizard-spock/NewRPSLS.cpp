#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {

  cout << "=================================\n";
  cout << "scissor paper srock lizard spock!\n";
  cout << "=================================\n";

  cout << "1) ✌️\n";
  cout << "2) ✋\n";
  cout << "3) ✊\n";
  cout << "4) 🤏\n";
  cout << "5) 🖖\n";

  cout << "shoot! ";

  srand (time(NULL));
  int computer = rand()%5 + 1;
  int user = 0;

  cin >> user;

  if (user == computer) {

    cout << "Draw!\n";

  }
  else if (computer == (user + 1) || computer == (user + 3)%5) {

    cout << "You win!\n";

  }
  else {

    cout << "You lose!\n";

  }

  return 0;
}
