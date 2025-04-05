#include <iostream>
#include "profile.hpp"

Profile::Profile(std::string new_name, int new_age, std::string new_city, std::string new_country, std::string new_pronouns)
{
    name = new_name;
    age = new_age;
    city = new_city;
    country = new_country;
    pronouns = new_pronouns;
}

std::string Profile::view_profile()
{
    std::string profileInfo = "Name: " + name + "\n";
    profileInfo += "age: " + std::to_string(age);
    profileInfo += "\ncity: " + city;
    profileInfo += "\ncountry: " + country;
    profileInfo += "\npronouns: " + pronouns;
    profileInfo += "\nhobbies: ";

    // Loop through users's hobbies included in their profile
    for (int hobbyIndex = 0; hobbyIndex < hobbies.size(); hobbyIndex++)
    {
        // Deals with edge case of the last item
        if ((hobbyIndex + 1) < hobbies.size())
            profileInfo += hobbies[hobbyIndex] + ", ";
        else
            profileInfo += hobbies[hobbyIndex];
    }

    return profileInfo;
}

void Profile::add_hobby(std::string new_hobby)
{
    hobbies.push_back(new_hobby);
}