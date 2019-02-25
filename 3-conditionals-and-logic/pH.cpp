#include <iostream>

int main() {
  
  double ph = 4.6;
  
  if (ph > 7) {
    
    std::cout << "Basic\n";
    
  } else if (ph < 7) {
    
    std::cout << "Acidic\n";
    
  } else {
    
    std::cout << "Neutral\n";
    
  } 
  
  return 0;
  
}