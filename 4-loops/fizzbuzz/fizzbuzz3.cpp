#include <iostream>

int main(){

  bool fizzBuzzed = false;
  
  for (int i = 1; i <= 100; i++){
    
    if (i % 3 == 0){
    	std::cout << "Fizz";
    	fizzBuzzed = true;
  	}
    
  	if (i % 5 == 0){
    	std::cout << "Buzz";
    	fizzBuzzed = true;
  	}
    
    if (!fizzBuzzed){
      std::cout << i;
    }
    
    std::cout << "\n";
    fizzBuzzed = false;
  }
  
}
