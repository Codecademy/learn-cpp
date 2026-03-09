#include <iostream>

int main() {
    for (int i = 1; i <= 100; i++) {
        bool fizz = (i % 3 == 0);
        bool buzz = (i % 5 == 0);

        if (fizz && buzz) {
            std::cout << "FizzBuzz\n";
        } else if (fizz) {
            std::cout << "Fizz\n";
        } else if (buzz) {
            std::cout << "Buzz\n";
        } else {
            std::cout << i << "\n";
        }
    }
}
