#include <iostream>
using namespace std;

int main() {

  for (int n = 1; n < 100; n++)
  {
    if (n % 3 == 0 && n % 5 == 0)
    {
      cout << "FizzBuzz" << "\n";
      continue;
    }
    if (n % 3 == 0)
    {
      cout << "Fizz" << "\n";
      continue;
    }
    if (n % 5 == 0)
    {
      cout << "Buzz" << "\n";
      continue;
    }
    cout << n << "\n";
  }
  return 0;
}
