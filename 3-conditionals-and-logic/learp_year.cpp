#include <iostream>

int main() {
   
  int y = 0;
  
  std::cout << "Enter year: ";
  std::cin >> y;
  
  if (y < 0 || y > 9999) {
    
    std::cout << "Invalid entry.\n";
    
  }
  else if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0) {

    std::cout << y << " falls on a leap year.\n";
    
  }
  
}