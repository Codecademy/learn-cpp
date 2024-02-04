#include <vector>
#include <iostream>
#include <string>

class Profile {
  
  std::string name;
  unsigned int age;
  std::string city;
  std::string pronouns;
  std::vector<std::string> hobbies;

  public:
  Profile (std::string name, unsigned int age, std::string city, std::string pronouns);

  void add_hobbies (std::initializer_list<std::string> new_hobbies);
  std::string view_profile();
};
