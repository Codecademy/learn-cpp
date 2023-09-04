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
3. This program make an switch case concepts to make conditional
*/
#include <iostream>
#include <string>
#include <cstdlib>

int main (){
    std::cout << "================================\n";
    std::cout << "Welcome to program fortune game \n";
    std::cout << "Magic 8-BALL : \n";

    srand(time(NULL));
    int answer_number = std::rand() % 10;
    std::string answer;

    // Make conditional to print base of case answer_number
    switch (answer_number){
        case 1 : 
        answer = "It is certain.";
        break;

        case 2 :
        answer = "It is decidedly so.";
        break;

        case 3 : 
        answer = "Without a doubt.";
        break;

        case 4 : 
        answer = "Yes - definitely.";
        break;

        case 5 :
        answer = "You may rely on it.";
        break;

        case 6 : 
        answer = "As I see it, yes.";
        break;

        case 7 :
        answer = "Most likely.";
        break;

        case 8 :
        answer = "Outlook good.";
        break;

        case 9 : 
        answer = "Yes.";
        break;

        default : 
        answer = "Invalid fortune number.";
        break; 
    }
    std::cout << answer << "\n";
    std::cout << "================================\n";
    return 0;
}
