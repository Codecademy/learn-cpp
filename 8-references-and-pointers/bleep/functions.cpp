#include <iostream>
using namespace std;

void asterisk(string &word, string &text, int i){
  for(int k=0; k < word.length(); k++){
    text[i+k] = '*';
  }
}

string bleep(string word,string &text){

    int word_len = word.length();
    int text_len = text.length();
    for (int i=0; i < (text_len-(word_len-1)); i++){
      string selected_seq = text.substr(i, word_len);
      if (selected_seq == word){
          asterisk(selected_seq, text, i);
    }
  }
    return text; 
}