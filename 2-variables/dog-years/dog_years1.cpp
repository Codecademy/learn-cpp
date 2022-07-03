#include <iostream>
//mathwiz
int main() {

std::string dog_name;
int dog_age;

int human_age;

std::cout << "Enter your dogs name: ";
std::cin >> dog_name;

std::cout << "Enter your dogs age: ";
std::cin >> dog_age;

human_age = 21 + (dog_age*4);

std::cout << "My name is " << dog_name << " I am " << dog_age << " In dog years I am " << human_age << " in human years\n" ;


  
}
