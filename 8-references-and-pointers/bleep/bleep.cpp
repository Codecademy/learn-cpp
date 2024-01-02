#include <iostream>
#include <string>
#include "functions.hpp"

int main() {

  std::string word = "broccoli";
  std::string text = "Barclay sounds like broccoli and calling someone broccoli is funny.";

  std::cout << bleep(word, text) << "\n";

}
