#include <iostream>

int main() {

  int answer = 8;
  
  int guess;

  std::cout << "I have a number 1-10.\n";
  std::cout << "Please guess it: ";
  std::cin >> guess;
 
  // Write a while loop here:

  while (guess != 8) {

    std::cout << "Wrong guess, try again: ";
    std::cin >> guess;

  }
  
  std::cout << "You got it!\n";

  return 0;
  
}