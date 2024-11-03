#include <iostream>

int main() {
  
  std::string dog_name;
  int dog_age, early_years, later_years, human_years;
  
  std::cout <<"Enter the name of your dog: ";
  std::cin >> dog_name;

  std::cout <<"Enter the age of " << dog_name <<": ";
  std::cin >> dog_age;
 
  // The first 2 years of a dog's life is 21 years
  early_years = 21;
 
  // Each following year counts as 4 human years;
  later_years = (dog_age - 2) * 4;

  // Conversion to human years
  human_years = early_years + later_years;

  std::cout <<"My name is " << dog_name <<"! Ruff ruff, I am " << human_years <<" years old in human years.\n";

}
