/*
Program challenge C++ in Rock, Paper, Scissors

Describe program : 
1. Prompt user to select either rock, paper, scissors, lizard, spock
2. instruct computer randomly select either Rock, Paper, Scissor, Lizard, Spock
4. Compare user choice and computer choice to determine who the winner
5. Inform user who the winner

Logic to game changing : 
1. Scissors cuts Paper
2. Papers covers Rock
3. Rock crushed Lizard
4. Lizard poisons Spock
5. Spock smashes Scissors
6. Scissors decapite Lizard
7. Lizard eats Paper
8. Paper disproves Spock
9. Spock vaporizes Rock 
10. Rock Crushes Scissor
*/

#include <iostream>
#include <stdlib.h>

int main (){

  // declare a random number 
  srand(time(NULL));

  // make random number 1,2,3 for computer
  int computer_input = rand() % 3 + 1;
  int user_input = 0;

  // make output input program 
  std::cout << "===========================\n";
  std::cout << "Game rock, paper, scissors, \n";
  std::cout << "===========================\n";
  
  std::cout << "Choose your Shoot : \n";
  std::cout << "1) ✊ rock \n";
  std::cout << "2) ✋ paper \n";
  std::cout << "3) ✌ scissor \n";

  std::cout << "Input Your shoot ! : ";
  std::cin >> user_input;
  std::cout << "\n";


  // Make logic decision to view what is computer choice
  std::cout << "=========================================\n";
  std::cout << "The Computer Choice : ";
  if (computer_input == 1){
    std::cout << "1) ✊ rock \n";
  } else if (computer_input == 2){
    std::cout << "2) ✋ paper \n";
  } else if (computer_input == 3){
    std::cout << "3) ✌ scissor \n";
  } else {
    std::cout << "Error, Invalid type choice \n";
  }
  

  // Make a logic decision to view what is user choice
  std::cout << "The User Choice : ";
  if (user_input == 1){
    std::cout << "1) ✊ rock \n";
  } else if (user_input == 2){
    std::cout << "2) ✋ paper \n";
  } else if (user_input == 3){
    std::cout << "3) ✌ scissors \n";
  } else {
    std::cout << "Error, Invalid type choice \n";
  }

  // Make a logic decision for rock, papper, scissors to determine who the winner 
  std::cout << "The Status Winner is : ";
  if (computer_input == 1){
    if (user_input == 1){
      std::cout << "Equal (Seri) \n";
    } else if (user_input == 2){
      std::cout << "Human User \n";
    } else if (user_input == 3){
      std::cout << "Computer \n";
    } else {
      std::cout << "Error Invalid input From User \n";
    }

  } else if (computer_input == 2){
    if (user_input == 1){
      std::cout << "Computer \n";
    } else if (user_input == 2){
      std::cout << "Equal (Seri) \n";
    } else if (user_input == 3){
      std::cout << "Human User";
    } else {
      std::cout << "Error Invalid input From User \n"; 
    }

  } else if (computer_input == 3){
    if (user_input == 1){
      std::cout << "Human User \n";
    } else if (user_input == 2){
      std::cout << "Computer \n";
    } else if (user_input == 3){
      std::cout << "Equal (Seri) \n";
    } else {
      std::cout << "Error Invalid Input From User \n";
    }
  } else {
    std::cout << "Error Input Computer Randomly \n";
  }
  std::cout << "==========================================\n";
  return 0;
}
