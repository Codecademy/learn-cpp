#include <iostream>
#include <vector>
#include "profile.hpp"

Profile::Profile(std::string new_name, int new_age,std::string new_city, std::string new_country, std::string new_pronouns) 
  : name(new_name), age(new_age), city(new_city), country(new_country), pronouns(new_pronouns) {

}

std::string Profile::view_profile(){
  std::vector<std::string> divide = {"========"};
  for (int i = 0; i < name.size(); i++){
    divide.push_back("=");
  }

  for(std::string s : divide){
    std::cout << s;
  }
  std::cout << "\n" << name << " profile\n";
  for(std::string s2 : divide){
    std::cout << s2;
  }
  std::cout << "\n";
  
  std::string bio = "Name: " + name + "\nAge: " + std::to_string(age) + "\nPronouns: " + pronouns + "\n";

  std::string hobby_string = "Hobbies: \n";
  for (std::string hobby : hobbies){
    hobby_string += "- " + hobby + "\n";
  }

  return bio + hobby_string;
}

void Profile::add_hobby(std::string new_hobby){
  hobbies.push_back(new_hobby);
}

