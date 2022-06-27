#include <string>

using namespace std;

void bleep(string &text, string word) {
  
  // main loop that will iterate through all the text 
  for (int i = 0; i < text.length(); i++) {
    
    //uses sub string to check if the word broccoli shows up
    string check = text.substr(i, word.length());
    
    //sees if word is broccoli and replaces it with *
    if (check == word) {
      
      for (int n = 0; n < word.length(); n++) {
        
        text[i + n] = '*';
        
      }
    }
  }
}
