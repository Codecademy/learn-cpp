// Learn C++
// Dog Years

#include <iostream>

int main()
{

  int dog_age = 3;

  int early_years, later_years, human_years;

  early_years = 21;

  later_years = (dog_age - 2) * 4;

  human_years = early_years + later_years;

  std::cout << "My name is Sparkles! Ruff Ruff, I am " << human_years << " years old in human years.\n";

}
