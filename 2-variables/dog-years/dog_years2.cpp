// Learn C++
// Dog Years

#include <iostream>

int main() {
  std::string dog_name;
  std::cout << "Enter your dog's name: ";
  std::cin >> dog_name;

  int dog_age = 0;
  std::cout << "Enter your dog's age: ";
  std::cin >> dog_age;

  const int early_years = 21;

  const int later_years = (dog_age - 2) * 4;

  const int human_years = early_years + later_years;

  std::cout << "My name is " << dog_name << "! Ruff Ruff, I am " << human_years
            << " years old in human years.\n";

  return 0;
}
