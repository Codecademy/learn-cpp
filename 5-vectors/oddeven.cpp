#include <iostream>
#include <vector>

int main() {

  int total_even = 0;
  int product_odd = 1;

  std::vector<int> vector = {2, 4, 3, 6, 1};

  for (int i = 0; i < vector.size(); i++) {

    if (vector[i] % 2 == 0) {

      total_even = total_even + vector[i];

    } else {

      product_odd = product_odd * vector[i];

    }

  }

  std::cout << "Sum of even numbers is " << total_even << "\n";
  std::cout << "Product of odd numbers is " << product_odd << "\n";

  return 0;

}
