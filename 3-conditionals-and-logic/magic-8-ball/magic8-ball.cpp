#include <iostream>
#include <cstdlib>
int main() {

  // Your future is here
  std::cout << "MAGIC 8-BALL 🎱:\n";
  srand(time(NULL));
  int numberanswer = std::rand() % 20;
  std::cout << "🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱";
  std::cout << "\n";
  std::cout << "The switch statement result: \n";
  switch (numberanswer) {
    case 0:
      std::cout << "It is certain.\n";
      break;
    case 1:
      std::cout << "It is decidedly so.\n";
      break;
    case 2:
      std::cout << "Without a doubt.\n";
      break;
    case 3:
      std::cout << "You may rely on it.\n";
      break;
    case 4:
      std::cout << "It is decidedly so.\n";
      break;
    case 5:
      std::cout << "As I see it, yes.\n";
      break;
    case 6:
      std::cout << "Most likely.\n";
      break;
    case 7:
      std::cout << "Outlook good.\n";
      break;
    case 8:
      std::cout << "Yes.\n";
      break;
    case 9:
      std::cout << "Signs point to yes.\n";
      break;
    case 10:
      std::cout << "Reply hazy, try again.\n";
      break;
    case 11:
      std::cout << "Ask again later.\n";
      break;
    case 12:
      std::cout << "Better not tell you now.\n";
      break;
    case 13:
      std::cout << "Cannot predict now.\n";
      break;
    case 14:
      std::cout << "Concentrate and ask again.\n";
      break;
    case 15:
      std::cout << "Don't count on it.\n";
      break;
    case 16:
      std::cout << "My reply is no.\n";
      break;
    case 17:
      std::cout << "My sources say no.\n";
      break;
    case 18:
      std::cout << "Outlook not so good.\n";
      break;
    case 19:
      std::cout << "Very doubtful.\n";
      break;
  }
  srand(time(NULL));
  int answer = std::rand() % 20;
  std::cout << "\n";
  std::cout << "The if statement result: \n";
  if (answer == 0) {
    std::cout << "It is certain.";
  }
  else if (answer == 1) {
    std::cout << "Without a doubt.";
  }
  else if (answer == 2) {
      std::cout << "You may rely on it.";
  }
  else if (answer == 3) {
      std::cout << "Most likely.";
  }
  else if (answer == 4) {
      std::cout << "Yes.";
  }
  else if (answer == 5) {
      std::cout << "Ask again later.";
  }
  else if (answer == 6){
    std::cout << "Cannot predict now.";
  }
  else if (answer == 7) {
    std::cout << "Don't count on it.";
  }
  else if (answer == 8) {
      std::cout << "My sources say no.";
  }
  else {
      std::cout << "Very doubtful.";
  }
}





