#include "profile.hpp"
#include <iostream>
#include <string>


int main() {

Profile sam("Sam Drakkila", 30, "New York", "he/him");

sam.add_hobbies({"hiking", "reading"});
std::cout << sam.view_profile() << "\n";
}
