// Learn C++
// Dog Years

#include <iostream>

int main() {
  const int dog_age = 3;

  const int early_years = 21;

  const int later_years = (dog_age - 2) * 4;

  const int human_years = early_years + later_years;

  std::cout << "My name is Sparkles! Ruff Ruff, I am " << human_years
            << " years old in human years.\n";

  return 0;
}
