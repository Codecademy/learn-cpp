#include <iostream>
#include <vector>

int main() {

  std::string entry = "I like tofu and tofu likes me.";
  
  std::vector<std::string> words;

  std::string word = "";

  std::string censored = "tofu";
  
  for (int i = 0; i < entry.size(); i++) {
    
    if (entry[i] != ' ') {

      word += entry[i];

    } else {
      
      words.push_back(word);
      
    }

  }

  for (int i = 0; i < words.size(); i++) {
         
    std::cout << words[i] << " ";

  }
  
  
  // for (int i = 0; i < words.size(); i++) {
    
  //   if (words[i] == "tofu"){
      
  //     std::cout << "BLEEP";  

  //   }
  //   else {
     
  //     std::cout << words[i] << " ";

  //   }
  // }
  
  std::cout << "\n";
  
  return 0;
  
}