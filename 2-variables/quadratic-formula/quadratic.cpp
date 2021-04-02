#include <iostream>
#include <cmath>

int main() {
  
  double a, b, c;
  std::cout << "Enter a: ";
  std::cin >> a;
  std::cout << "Enter b: ";
  std::cin >> b;
  std::cout << "Enter c: ";
  std::cin >> c;
  
  double root1, root2;
  root1 = std::sqrt(b*b - (4*a*c)); //So you just call the function sqrt() one time.
  root2 = (-b - root1)/ (2*a);
  root1 = (-b + root1)/ (2*a);
  
  std::cout << "Root 1 is " << root1 << "\n";
  std::cout << "Root 2 is " << root2 << "\n";
}
