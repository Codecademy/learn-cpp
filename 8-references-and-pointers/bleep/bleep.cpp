#include <iostream>
#include <string>

#include "functions.hpp"

using namespace std;

int main() {
  
  // text that will be edited
  string text = "I sometimes eat broccoli. There are three interesting things about broccoli. Number One. Nobody knows how to spell it. Number Two. No matter how long you boil it, it's always cold by the time it reaches your plate. Number Three. It's green. #broccoli";
  // word that I will replace
  string word = "broccoli";
  // bleep function call
  bleep(text, word);

  // print edited text
  std::cout << text << "\n";

  return 0;

}
