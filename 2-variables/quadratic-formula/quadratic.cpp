// Quadratic formula 
#include <iostream> 
#include <cmath>

int main(){
  // 1. declare variable a,b,c
  double a,b,c;

  //2,3 Input a,b,c
  std::cout << "Enter a : ";
  std::cin >> a;

  std::cout << "Enter b : ";
  std::cin >> b;

  std::cout << "Enter c : ";
  std::cin >> c;

  // 4. declare two variable root1 and root2
  double root1, root2;

  // 5. formula of root1 
  root1 = (-b + std::sqrt(b*b - 4*a*c)) / (2*a);
  root2 = (-b - std::sqrt(b*b - 4*a*c)) / (2*a);
  std::cout << "Root 1 is " << root1 << "\n";
  std::cout << "Root 2 is " << root2 << "\n";
  return 0;
}
