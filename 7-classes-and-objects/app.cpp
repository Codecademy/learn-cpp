#include <iostream>
#include "profile.hpp"

using namespace std;

int main() {

    Profile sam("Sam Drakkila", 30, "New York", "USA", "he/him");
    sam.new_hobby("listening to audiobooks and podcasts");
    sam.new_hobby("playing rec sports like bowling and kickball");
    sam.new_hobby("writing a speculative fiction novel");
    sam.new_hobby("reading advice columns");
    cout << sam.view_profile();
}
