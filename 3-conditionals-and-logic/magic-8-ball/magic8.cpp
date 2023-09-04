/*
C++ Program codecademy, magic8 balls, random fortune game 
description :
1. random fortune game each time from 0 - 9
2. every declare a random number can print this output : 
    1) It is certain. 
    2) It is decidedly so.
    3) Without a doubt.
    4) Yes - definitely.
    5) You may rely on it.
    7) Ass I see it, yes. 
    8) Most likely.
    9) Outlook good.
3. This program make an if else concepts
*/
#include <iostream>
#include <string>
#include <cstdlib>

int main (){
    std::cout << "=====================================\n";
    std::cout << "Welcome to the program fortune game : \n";
    std::cout << "Magic 8-BALL \n";
    srand(time(NULL));
    int answer_number = std::rand() % 10;
    std::string answer;

    // Make a conditional to print based on random number
    if (answer_number == 1){
        answer = "It is certain.";
    } else if (answer_number == 2){
        answer = "It is decidedly so.";
    } else if (answer_number == 3){
        answer = "Without a doubt.";
    } else if (answer_number == 4){
        answer = "Yes - definitely.";
    } else if (answer_number == 5){
        answer = "You may rely on it.";
    } else if (answer_number == 6){
        answer = "As I see it, yes.";
    } else if (answer_number == 7){
        answer = "Most likely.";
    } else if (answer_number == 8){
        answer = "Outlook good.";
    } else if (answer_number == 9){
        answer = "Yes.";
    } else {
        answer = "Invalid number";
    }
    // Preview a answer random number 
    std::cout << answer << "\n\n";
    std::cout << "Thank You for your choice \n";
    std::cout << "=====================================\n";
    return 0;
}
