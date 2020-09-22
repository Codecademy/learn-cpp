#include <string>
#include "functions.hpp"

using namespace std;

// bleep function replaces the word (passed as value) passed in the text (passed as reference) with # (pound or hash) and returns the new replaced text
string bleep(string word, string &text)
{
  // iterating through the text to find the word
   for (int i = 0; i < text.size(); i++) {

    // character counter to count the characters in word  
    int equals_count = 0;
       
    // iterating through the word   
    for (int j = 0; j < word.size(); j++) {   
      if (text[i+j] == word[j]) {
        
        equals_count++;         
      } 
    }

    // checking if found counted word size is equal to the passed in word's size
    if (equals_count == word.size())
    {
      // replacing word with # (pound or hash)
      for (int k=0; k < word.size(); k++)
        text[i+k] = '#';
    }
   }
   // returning the replaced text
    return text;
}
