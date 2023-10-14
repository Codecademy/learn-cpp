#include <iostream>
#include "functions.hpp"

using namespace std;

int main(){

  string word = "broccoli";
  string text = "I haven't had broccoli in a long time. I do miss broccoli sometimes. I should add broccoli to my groceries list. That's done. That way I'm sure to not forget to add broccoli to my basket, my broccoli basket, on my broccoli grocery trip. #broccoli";

  bleep(word, text);
  cout << text;

  return 0;
}