/*
C++ codecademy project rock, paper, scissors
description :
1. Prompts the user to select either Rock, Paper, Scissors, Lizard, or Spock.
2. Insruct the computer to randomly select either Rock, Paper, Scissors, Lizard or Spock.
3. Compares the user's choice and the computer's choice and determine the winner.
4. Informs the user who the winner is

Instruct logic to win the game :
1. Scissors cuts Paper. 
2. Papers covers Rock. 
3. Rock crushed Scissors
*/
#include <iostream>
#include <stdlib.h>
#include <string> 

int main (){

    // make random computer choice 
    srand (time(NULL));

    int computer_input = rand() % 3 + 1;
    int user_input = 0;
    std::string computer_shoot;
    std::string user_shoot;
    std::string result_winner;

    std::cout << "================================================\n";
    std::cout << "Welcome to challenge game rock, paper, scissors \n\n";

    std::cout << "1) ✊ Rock \n";
    std::cout << "2) ✋ Paper \n";
    std::cout << "3) ✌ Scissors \n";
    std::cout << "Choice your answer : ";
    std::cin >> user_input;
    std::cout << "\n";

    std::cout << "Result Shoot : \n";
    // Make logic conditional for user shoot 
    if (user_input == 1){
        user_shoot = "✊ Rock";
    } else if (user_input == 2){
        user_shoot = "✋ Paper";
    } else if (user_input == 3){
        user_shoot = "✌ Scissors";
    } else {
        user_shoot = "Error invalid input from user input (1 to 3)";
    }

    // Make logic conditional for computer shoot
    if (computer_input == 1 && (user_input == 1 || user_input == 2 || user_input == 3)){
        computer_shoot = "✊ Rock";
    } else if (computer_input == 2 && (user_input == 1 || user_input == 2 || user_input == 3)){
        computer_shoot = "✋ Paper";
    } else if (computer_input == 3 && (user_input == 1 || user_input == 2 || user_input == 3)){
        computer_shoot = "✌ Scissors";
    } else if ((computer_input == 1 && computer_input == 2 || computer_input == 3) || (user_input != 1 || user_input != 2 || user_input !=3)){
        computer_shoot = "Error invalid computer shoot from user input";
    } else {
        computer_shoot = "Error"; 
    }

    // Code to make conditional logic to win win result 
    if (computer_input == 1){
        if (user_input == 1){
            result_winner = "= Equal seri";
        } else if (user_input == 2){
            result_winner = "😎 User Input";
        } else if (user_input == 3){
            result_winner = "💻 Computer Input";
        } else {
            result_winner = "Error - Invalid Input User";
        }

    } else if (computer_input == 2){
        if (user_input == 1){
            result_winner = "💻 Computer Input";
        } else if (user_input == 2){
            result_winner = "= Equal seri";
        } else if (user_input == 3){
            result_winner = "😎 User Input";
        } else {
            result_winner = "Error - Invalid Input User";
        }

    } else if (computer_input == 3){
        if (user_input == 1){
            result_winner = "😎 User Input";
        } else if (user_input == 2){
            result_winner = "💻 Computer Input";
        } else if (user_input == 3){
            result_winner = "= Equal seri";
        } else {
            result_winner = "Error - Invalid Input User";
        }
    } else {
        result_winner = "Error - Program";
    }

    std::cout << "User choice : " << user_shoot << "\n";
    std::cout << "Computer choice : " << computer_shoot << "\n\n";
    std::cout << "Comparison war (user vs computer) : " << user_shoot << " vs " << computer_shoot << "\n";
    std::cout << "Result Winner Of : " << result_winner << "\n";
    std::cout << "Thank For Play this game \n";
    std::cout << "================================================\n";
    return 0;
}
