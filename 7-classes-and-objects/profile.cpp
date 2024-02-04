#include "profile.hpp"
#include <iostream>
#include <string>

Profile::Profile (std::string name, unsigned int age, std::string city, std::string pronouns)
  : name(name), age(age), city(city), pronouns(pronouns) {}

void Profile::add_hobbies(std::initializer_list<std::string> new_hobbies)
{
  hobbies.insert(hobbies.end(), new_hobbies.begin(), new_hobbies.end());
}

std::string Profile::view_profile()
{
  std::string age_string = std::to_string(age);

  std::string profile_info = "Name: " + Profile::name + "\n" + "Age: " + age_string + "\n" + "City: " + Profile::city + "\n" + "Pronouns: " + Profile::pronouns + "\n" + "Hobbies:";

  int size = hobbies.size();

  for (std::string i: hobbies)
  {
    if (i != hobbies[0])
    {
      profile_info += ", " + i;
    }
    else
    {
      profile_info += " " + i;
    }
  }

  return profile_info;
}
