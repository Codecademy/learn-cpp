#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    int rock{1};
    int paper{2};
    int scissor{3};
    int lizard{4};
    int spock{5};

    int mynum;
    int comp;

    std::cout << "Select a number as per assigned options given from the below chart\n1) Rock\n2) Paper\n3) Scissor\n4) Lizard\n5) Spock" << std::endl;
    std::cin >> mynum;
    std::cout << "You selected Option: " << mynum << std::endl;

    std::srand(std::time(0));
    comp = std::rand() % 5 + 1;
    std::cout << "Computer selected option: " << comp << std::endl;

    if (mynum != comp) {
        if (mynum == scissor && comp == paper) {
            std::cout << "You win";
        } else if (mynum == paper && comp == rock) {
            std::cout << "You win";
        } else if (mynum == rock && comp == lizard) {
            std::cout << "You win";
        } else if (mynum == lizard && comp == spock) {
            std::cout << "You win";
        } else if (mynum == spock && comp == scissor) {
            std::cout << "You win";
        } else if (mynum == scissor && comp == lizard) {
            std::cout << "You win";
        } else if (mynum == lizard && comp == paper) {
            std::cout << "You win";
        } else if (mynum == paper && comp == spock) {
            std::cout << "You win";
        } else if (mynum == spock && comp == rock) {
            std::cout << "You win";
        } else if (mynum == rock && comp == scissor) {
            std::cout << "You win";
        } else {
            std::cout << "Computer wins";
        }
    } else {
        std::cout << "Tie";
    }

    return 0;
}
