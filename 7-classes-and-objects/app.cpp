#include <iostream>

#include "profile.hpp"

int main() {
  Profile sam("Sam Drakkila", 30, "New York", "USA", "he/him");

  sam.add_hobby("listening to audiobooks and podcasts");
  sam.add_hobby("playing rec sports like bowling and kickball");

  std::cout << sam.view_profile();
}
