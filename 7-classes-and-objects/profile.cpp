#include <iostream>

#include "profile.hpp"

Profile::Profile(const std::string new_name, const int new_age, const std::string new_city, const std::string new_country, const std::string new_pronouns) : name(new_name), age(new_age), city(new_city), country(new_country), pronouns(new_pronouns) {
}

std::string Profile::view_profile() {
  std::string hobbies_str = "";

  for (const std::string &hobby : hobbies) {
    hobbies_str += hobby + ", ";
  }

  hobbies_str = hobbies_str.substr(0, hobbies_str.length() - 2);

  return name + " is " + std::to_string(age) + " years old and " + pronouns.substr(0, pronouns.find("/")) + " lives in " + city + " city, " + country + ".\n" + "Hobbies : " + hobbies_str + "\n";
}

void Profile::add_hobby(const std::string &new_hobby) {
  hobbies.push_back(new_hobby);
}
