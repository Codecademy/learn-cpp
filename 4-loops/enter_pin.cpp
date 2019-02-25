#include <iostream>

int main() {
  
  int pin = 0;
  int tries = 0;
  
  std::cout << "BANK OF CODECADEMY\n";
  
  std::cout << "Enter your PIN: ";
  std::cin >> pin;
  
  while (pin != 1234) {
    
    std::cout << "Wrong PIN. Try again: ";
    std::cin >> pin;
    tries++;
    
  }
  
  std::cout << "PIN accepted!\n";
  std::cout << "You now have access.\n"; 
   
  return 0;
  
}