#include "ufo.hpp"

int main() {

  std::cout << "=============\n";
  std::cout << "UFO: The Game\n";
  std::cout << "=============\n";
  std::cout << "Instructions: save your friend from alien abduction by guessing the letters in the codeword.\n";

  while (answer != codeword && misses < 7) {

    take_turn();
    
  }

  if (answer == codeword) {

    std::cout << "Hooray! You saved the person and earned a medal of honor!\n";

  } else {

    std::cout << "Oh no! The UFO just flew away with another person!\n";

  }

}
