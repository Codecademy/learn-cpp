#include <iostream>

int main() {
  
  // Declare and initialize variables for currency and conversions.
  double p, r, s, d;
  double p_to_d = .0575;
  double r_to_d = .2028;
  double s_to_d = .2682;

  // Input prompts and capture.
  std::cout << "Enter number of Columbian Pesos: ";
  std::cin >> p;
  std::cout << "Enter number of Brazilian Reais: ";
  std::cin >> r;
  std::cout << "Enter number of Peruvian Soles: ";
  std::cin >> s;
  
  // Calculate dollars.
  d = (p*p_to_d) + (r*r_to_d) + (s*s_to_d);

  // Output dollars.
  std::cout << "US Dollars = $" << d << "\n";

}
