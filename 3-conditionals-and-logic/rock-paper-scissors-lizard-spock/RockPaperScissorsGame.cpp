/*This program will run a game named Rock, Paper, Scissors, Lizard, Spock.
Author: Andrei Hulk
*/
#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
  // Live long and prosper
  srand (time(NULL));
  int computer = rand() % 3 + 1;
  int userChoice = 0;
  // The begining of the game
  cout << "======================\n";
  cout << "Rock, Paper, Scissors!\n";
  cout << "======================\n";
  /*
  rock > scissors
  scissors > paper
  paper > rock
  */ 
  cout << "1) ✊\n";
  cout << "2) ✋\n";
  cout << "3) ✌️\n";
  // Choosing carachter
  cout << "Choose your battle thing! \n";
  cin >> user;
  if( user == 1 )
    cout << "You have a good thing:✊ ,but \n";
  if( user == 2 )
    cout << "You have a good thing:✋ ,but \n";
  if( user == 3 )
    cout << "You have a good thing:✌️ ,but \n";
  if( computer == 1 )
    cout << "Computer has a good thing either:✊ ,so:\n";
  if( computer == 2 )
    cout << "Computer has a good thing either:✋ ,so:\n";
  if( computer == 3 )
    cout << "Computer has a good thing either:✌️ ,so:\n";
  // The BATTLE
  if( user == computer )
    cout << "Its an equal fair\n";
  if( user == 1 && computer == 2 )
    cout << "Computer`s paper just covered your poor rock :((\n";
  if( user == 1 && computer == 3 )
    cout << "Thats great! You are a scissor smasher :))\n";
  if( user == 2 && computer == 1 )
    cout << "You really covered the computer`s little rock :))\n";
  if( user == 2 && computer == 3 )
    cout << "Thats sad! You are papercutted :((\n";
  if( user == 3 && computer == 1 )
    cout << "Sorry! Your scissor is in pieces :((\n";
  if( user == 3 && computer == 2 )
    cout << "Wowww! You really cutted that paper :))\n";
  if( user > 3 )
    cout << "You can`t compete with nothing, its really unfair\n";
}
