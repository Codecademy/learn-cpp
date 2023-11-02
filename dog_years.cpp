#include <iostream>

int main() {
  // variable of my dogs age
  int dog_age = 12;
  // dogs first two years is equal to 21 human years
  int early_years = 21;
  // following years count as 4 human years
  int later_years = (dog_age - 2) * 4;
  // dogs total human years is early years plus later_years
  int human_years = early_years + later_years;
  // can also be written in one line below
  // int early_years, later_years, human_years;
  std::cout << "MY name is Courage! Ruff ruff, I am " << human_years << " years old in human years.\n";
}
