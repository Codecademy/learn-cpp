#include <iostream>

int main() {
  double height = 0.0;
  std::cout << "Type in your height (m): ";
  std::cin >> height;

  double weight = 0.0;
  std::cout << "Type in your weight (kg): ";
  std::cin >> weight;

  const double bmi = weight / (height * height);

  std::cout << "Your BMI is " << bmi << "\n";

  return 0;
}
