#include <string>
#include "functions.hpp"

std::string bleep(std::string &bword, std::string &btext) {

  std::string stars = "*";

  while (stars.length() < bword.length()) {

    stars += "*";

  }

  //loop through replacing "broccoli" until .find is greater than the length of btext
  while (btext.find(bword) < btext.length()) {

    btext = btext.replace(btext.find(bword), bword.length(), stars);

  }

  return btext;

}
