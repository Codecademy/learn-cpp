#include <vector>
#include <string>

using namespace std;

class  Profile {

    private:

    string name;
    int age;
    string city;
    string country;
    string pronouns;
    vector<string> hobbies;

    public:

    Profile(string new_name = "John/Jane Doe", int new_age = 0, string new_city = "Sin City", string new_country = "Unknown", string new_pronouns = "they/them");

    string view_profile();

    void new_hobby(string new_hobby);

};
