#include <iostream>
#include <cstdlib>
#include <vector>

int main() {
  std::cout << "MAGIC 8-BALL: \n\n";

  std::vector<std::string> answers = {
    "It is certain.", 
    "It is decidedly so.", 
    "Without a doubt.", 
    "Yes - definitely.", 
    "You may rely on it.", 
    "As I see it, yes.", 
    "Most likely.", 
    "Outlook good.", 
    "Yes.", 
    "Signs point to yes.", 
    "Reply hazy, try again.", 
    "Ask again later.", 
    "Better not tell you now.", 
    "Cannot predict now.", 
    "Concentrate and ask again.", 
    "Don't count on it.", 
    "My reply is no.", 
    "My sources say no.", 
    "Outlook not so good.", 
    "Very doubtful."
  };

  srand(time(NULL));
  int answer = std::rand() % 20;

  std::cout << answers[answer];

  return 0; 
}
