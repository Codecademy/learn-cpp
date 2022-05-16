#include <string>
#include <vector>

class Profile {
  private:
    std::string name;
    int age;
    std::string city;
    std::string country;
    std::string pronouns;
    std::vector<std::string> hobbies;
  
  public:
    Profile(const std::string new_name, const int new_age, const std::string new_city, const std::string new_country, const std::string new_pronouns = "they/them");
    void add_hobby(const std::string &new_hobby);
    std::string view_profile();
};
