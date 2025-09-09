#include <iostream>

int main() {
  
  float dog_age;
  int dog_years_old;
  bool older;

  std::cout << "Please enter you dogs age in a float value: ";

  std::cin >> dog_age;
  //Doesnt calculate exact year just groups it into 21 or 42
  if (dog_age <= 2) {
    older = false;
    if (dog_age < 1.5) {
      dog_years_old = 21;
    } else {
      dog_years_old = 42;
    }
  } else {
    older = true;
    if (older == true) {
      dog_years_old = (dog_age * 4) + 42;
  } 
} 

std::cout << "Your dogs age in human years is: " << dog_years_old << "\n";

}
