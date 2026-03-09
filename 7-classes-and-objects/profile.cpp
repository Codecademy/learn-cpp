#include "profile.hpp"
#include <string>
#include <vector>
#include <iostream>

using namespace std;

Profile::Profile(string new_name, int new_age, string new_city, string new_country, string new_pronouns) {
    name = new_name;
    age = new_age;
    city = new_city;
    country = new_country;
    pronouns = new_pronouns;
}

string Profile::view_profile() {
    string profile_details = "Name: " + name;
    profile_details += "\nAge: " + to_string(age);
    profile_details += "\nCity: " + city;
    profile_details += "\nCountry: " + country;
    profile_details += "\nPronouns: " + pronouns;
    profile_details += "\nHobbies: ";
    for (int i = 0; i < hobbies.size(); i++) {
        profile_details += hobbies[i];
        if (i < hobbies.size() - 1) {
            profile_details += ", ";
        } else {
            profile_details += ".\n";
        }
    }

    return profile_details;
}

void Profile::new_hobby(string new_hobby) {
    hobbies.push_back(new_hobby);
}
