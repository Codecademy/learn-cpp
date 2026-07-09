#include <iostream>
#include <string>
#include <vector>






int main() {
  int target = 70; //4 bytes
  bool first; //1 byte
  int cur_total = 0;
  std::vector<int> byte_sizes = {128,64,32,16,8,4,2,1}; //32 bytes
  std::vector<int> saved_indices(8,0); //32 bytes
  
  //temp
  for (size_t i{}; i < byte_sizes.size(); ++i) {
    if (cur_total + byte_sizes[i] <= target) {
      saved_indices[i] = 1;
      cur_total += byte_sizes[i];
    }
  }
  
  std::cout << target << "\n";
  for (auto i : saved_indices) {
    std::cout << i;
  }
  std::cout << "\n";
  std:: cout << static_cast<char>(target) << "\n";

}
  

   
