#include <iostream>
#include <vector>
#include <cstdlib>
#include <time.h>

using namespace std;


//################
//Person vs Person
//################

void PvP() {
	vector<char> fields = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };
	int userInput;
	bool gameEnded = false;
	bool POneTurn = true;

	while (!gameEnded) {
		//determine who's turn it is
		if (POneTurn) {
			//Player One's turn
			cout << "Player 1, it's your turn! (x)\n";

			cout << " " << fields[0] << " | " << fields[1] << " | " << fields[2] << " \n";
			cout << "---|---|---\n";
			cout << " " << fields[3] << " | " << fields[4] << " | " << fields[5] << " \n";
			cout << "---|---|---\n";
			cout << " " << fields[6] << " | " << fields[7] << " | " << fields[8] << " \n";

			cout << "What field do you choose? ( 1 - 9 ) : ";
			cin >> userInput;

			//check if field is already taken
			while (fields[userInput - 1] == 'x' || fields[userInput - 1] == 'o') {
				cout << "That field is already taken. Please take another one. \n";
				cin >> userInput;
			}

			//set chosen field to x
			fields[userInput - 1] = 'x';
			POneTurn = false;
		}
		else {
			//Player Two's turn
			cout << "Player 2, it's your turn! (o)\n";

			cout << " " << fields[0] << " | " << fields[1] << " | " << fields[2] << " \n";
			cout << "---|---|---\n";
			cout << " " << fields[3] << " | " << fields[4] << " | " << fields[5] << " \n";
			cout << "---|---|---\n";
			cout << " " << fields[6] << " | " << fields[7] << " | " << fields[8] << " \n";

			cout << "What field do you choose? ( 1 - 9 ) : ";
			cin >> userInput;

			//check if field is already taken
			while (fields[userInput - 1] == 'x' || fields[userInput - 1] == 'o') {
				cout << "That field is already taken. Please take another one. \n";
				cin >> userInput;
			}

			//set chosen field to o
			fields[userInput - 1] = 'o';
			POneTurn = true;
		}

		//check if someone won
		if (
			(fields[0] == fields[1] && fields[1] == fields[2]) || //first row equal
			(fields[3] == fields[4] && fields[4] == fields[5]) || //second row equal
			(fields[6] == fields[7] && fields[7] == fields[8]) || //third row equal

			(fields[0] == fields[3] && fields[3] == fields[6]) || //first column equal
			(fields[1] == fields[4] && fields[4] == fields[7]) || //second column equal
			(fields[2] == fields[5] && fields[5] == fields[8]) || //third column equal

			(fields[0] == fields[4] && fields[4] == fields[8]) || //diagonal from the upper left to lower right
			(fields[2] == fields[4] && fields[4] == fields[6])    //diagonal from the upper right to lower left
			) {
			gameEnded = true; //end the game if someone won
			cout << "Game ended.\n";

			//determine who won the game
			if (POneTurn) {
				cout << "Player 2 won!\n";
			}
			else {
				cout << "Player 1 won!\n";
			}
		}

		//check if field is full and it's a draw
		if (
			(fields[0] == 'x' || fields[0] == 'o') &&
			(fields[1] == 'x' || fields[1] == 'o') &&
			(fields[2] == 'x' || fields[2] == 'o') &&
			(fields[3] == 'x' || fields[3] == 'o') &&
			(fields[4] == 'x' || fields[4] == 'o') &&
			(fields[5] == 'x' || fields[5] == 'o') &&
			(fields[6] == 'x' || fields[6] == 'o') &&
			(fields[7] == 'x' || fields[7] == 'o') &&
			(fields[8] == 'x' || fields[8] == 'o')
			) {
			gameEnded = true;//game is a draw
			cout << "game ended with a draw\n";
		}
	}


}


//###################
// Person vs Computer
//###################

void PvE() {
	vector<char> fields = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };
	/*
	remember, when referring to positions in the vector,
	the first member is at position 0. So...
	1st position = fields[0] = 1
	2nd position = fields[1] = 2
	3rd position = fields[2] = 3
	4th position = fields[3] = 4
	5th position = fields[4] = 5
	6th position = fields[5] = 6
	7th position = fields[6] = 7
	8th position = fields[7] = 8
	9th position = fields[8] = 9
	*/
	int userInput;
	bool gameEnded = false;
	bool POneTurn = true; //i don't know why I decided to do PascalCase here instead of camelCase
	int computerInput; // matches the sceme of the field (numbers 1 - 9)

	cout << "You are playing against the computer!\n";

	while (!gameEnded) {
		//determine who's turn it is
		if (POneTurn) {
			//Player's turn
			cout << "Player, it's your turn! (x)\n";

			cout << " " << fields[0] << " | " << fields[1] << " | " << fields[2] << " \n";
			cout << "---|---|---\n";
			cout << " " << fields[3] << " | " << fields[4] << " | " << fields[5] << " \n";
			cout << "---|---|---\n";
			cout << " " << fields[6] << " | " << fields[7] << " | " << fields[8] << " \n";

			cout << "What field do you choose? ( 1 - 9 ) : ";
			cin >> userInput;

			//check if field is already taken
			while (fields[userInput - 1] == 'x' || fields[userInput - 1] == 'o') {
				cout << "That field is already taken. Please take another one. \n";
				cin >> userInput;
			}

			//set chosen field to x
			fields[userInput - 1] = 'x';
			POneTurn = false;
		}
		else {
			//Computer's turn
			cout << "Computer is playing...\n";
			srand(time(0));

			//decide if computer tries to block the Player or not

			// ############ horizontal blocking ############

			// --- first row ---
			if (
				fields[0] == 'x' && fields[1] == 'x' && // if 1 and 2 are x
				fields[2] != 'x' && fields[2] != 'o'    // and 3 is not taken already
				/*
				 x | x | o
				---|---|---
				 4 | 5 | 6
				---|---|---
				 7 | 8 | 9
				*/
				) {
				computerInput = 3; // computer takes the 3rd field
			}
			else if (
				fields[1] == 'x' && fields[2] == 'x' && // if 2 and 3 are x
				fields[0] != 'x' && fields[0] != 'o'    // and 1 is not taken already
				/*
				 o | x | x
				---|---|---
				 4 | 5 | 6
				---|---|---
				 7 | 8 | 9
				*/
				) {
				computerInput = 1; // computer takes the 1st field
			}

			// --- second row ---
			else if (
				fields[3] == 'x' && fields[4] == 'x' && // if 4 and 5 are x
				fields[5] != 'x' && fields[5] != 'o'    // and 6 is not taken already
				/*
				 1 | 2 | 3
				---|---|---
				 x | x | o
				---|---|---
				 7 | 8 | 9
				 */
				) {
				computerInput = 6; // computer takes the 6th field
			}
			else if (
				fields[4] == 'x' && fields[5] == 'x' && // if 5 and 6 are x
				fields[3] != 'x' && fields[3] != 'o'    // and 4 is not taken already
				/*
				 1 | 2 | 3
				---|---|---
				 o | x | x
				---|---|---
				 7 | 8 | 9
				*/
				) {
				computerInput = 4; //computer takes the 4th field
			}

			// --- third row ---
			else if (
				fields[6] == 'x' && fields[7] == 'x' && // if 7 and 8 are x
				fields[8] != 'x' && fields[8] != 'o'    // and 9 is not taken already
				/*
				 1 | 2 | 3
				---|---|---
				 4 | 5 | 6
				---|---|---
				 x | x | o
				*/
				) {
				computerInput = 9; // computer takes the 9th field
			}
			else if (
				fields[7] == 'x' && fields[8] == 'x' && // if 8 and 9 are x
				fields[6] != 'x' && fields[6] != 'o'    // and 7 is not taken already
				/*
				 1 | 2 | 3
				---|---|---
				 4 | 5 | 6
				---|---|---
				 o | x | x
				 */
				) {
				computerInput = 7; // computer takes the 7th field
			}

			// ################## vertical blocking ###################

			// --- first column ---
			else if (
				fields[0] == 'x' && fields[3] == 'x' && // if 1 and 4 are x
				fields[6] != 'x' && fields[6] != 'o'    // and 7 is not taken already
				/*
				 x | 2 | 3
				---|---|---
				 x | 5 | 6
				---|---|---
				 o | 8 | 9
				*/
				) {
				computerInput = 7; // computer takes the 7th field
			}
			else if (
				fields[3] == 'x' && fields[6] == 'x' && // if 4 and 7 are x
				fields[0] != 'x' && fields[0] != 'o'    // and 1 is not taken already
				/*
				 o | 2 | 3
				---|---|---
				 x | 5 | 6
				---|---|---
				 x | 8 | 9
				 */
				) {
				computerInput = 1; // computer takes the 1st field
			}

			// --- second column ---
			else if (
				fields[1] == 'x' && fields[4] == 'x' && // if 2 and 5 are x
				fields[7] != 'x' && fields[7] != 'o'    // and 8 is not taken already
				/*
				 1 | x | 3
				---|---|---
				 4 | x | 6
				---|---|---
				 7 | o | 9
				*/
				) {
				computerInput = 8; // computer takes the 8th field
			}
			else if (
				fields[4] == 'x' && fields[7] == 'x' && // if 5 and 8 are x
				fields[1] != 'x' && fields[1] != 'o'    // and 2 is not taken already
				/*
				 1 | o | 3
				---|---|---
				 4 | x | 6
				---|---|---
				 7 | x | 9
				 */
				) {
				computerInput = 2; // computer takes the 2nd field
			}

			// --- third column ---
			else if (
				fields[2] == 'x' && fields[5] == 'x' && // if 3 and 6 are x
				fields[8] != 'x' && fields[8] != 'o'    // and 9 is not taken already
				/*
				 1 | 2 | x
				---|---|---
				 4 | 5 | x
				---|---|---
				 7 | 8 | o
				*/
				) {
				computerInput = 9; // computer takes the 9th field
			}
			else if (
				fields[5] == 'x' && fields[8] == 'x' && // if 6 and 9 are x
				fields[2] != 'x' && fields[2] != 'o'    // and 3 is not taken already
				/*
				 1 | 2 | o
				---|---|---
				 4 | 5 | x
				---|---|---
				 7 | 8 | x
				*/
				) {
				computerInput = 3; // computer takes the 3rd field
			}

			// ################## diagonal blocking ###################

			// --- from upper left to lower right ---
			else if (
				fields[0] == 'x' && fields[4] == 'x' && // if 1 and 5 are x
				fields[8] != 'x' && fields[8] != 'o'    // and 9 is not taken already
				/*
				 x | 2 | 3
				---|---|---
				 4 | x | 6
				---|---|---
				 7 | 8 | o
				*/
				) {
				computerInput = 9; // computer takes 9th field
			}
			else if (
				fields[4] == 'x' && fields[8] == 'x' && // if 5 and 9 are x
				fields[0] != 'x' && fields[0] != 'o'    // and 1 is not taken already
				/*
				 o | 2 | 3
				---|---|---
				 4 | x | 6
				---|---|---
				 7 | 8 | x
				 */
				) {
				computerInput = 1; // computer takes 1st field
			}

			// --- from lower left to upper right
			else if (
				fields[6] == 'x' && fields[4] == 'x' && // if 7 and 5 are x
				fields[2] != 'x' && fields[2] != 'o'    // and 3 is not taken already
				/*
				 1 | 2 | o
				---|---|---
				 4 | x | 6
				---|---|---
				 x | 8 | 9
				 */
				) {
				computerInput = 3; // computer takes 3rd field
			}
			else if (
				fields[4] == 'x' && fields[2] == 'x' && // if 5 and 3 are x
				fields[6] != 'x' && fields[6] != 'o'    // and 7 is not taken already
				/*
				 1 | 2 | x
				---|---|---
				 4 | x | 6
				---|---|---
				 o | 8 | 9
				*/
				) {
				computerInput = 7; // computer takes 7th field
			}

			// ############# no blocking #############
			else {
				computerInput = rand() % 9 + 1; // computer takes random number
			}

			//check if computer choice is already taken, and if it is, take another number
			while (fields[computerInput - 1] == 'x' || fields[computerInput - 1] == 'o') {
				//take another number
				srand(time(0));
				computerInput = rand() % 9 + 1;
			}
			cout << "Computer's choice: " << computerInput << ".\n";

			//set chosen field to o
			fields[computerInput - 1] = 'o';
			POneTurn = true;
		}

		//check if someone won
		if (
			(fields[0] == fields[1] && fields[1] == fields[2]) || //first row equal
			(fields[3] == fields[4] && fields[4] == fields[5]) || //second row equal
			(fields[6] == fields[7] && fields[7] == fields[8]) || //third row equal

			(fields[0] == fields[3] && fields[3] == fields[6]) || //first column equal
			(fields[1] == fields[4] && fields[4] == fields[7]) || //second column equal
			(fields[2] == fields[5] && fields[5] == fields[8]) || //third column equal

			(fields[0] == fields[4] && fields[4] == fields[8]) || //diagonal from the upper left to lower right
			(fields[2] == fields[4] && fields[4] == fields[6])    //diagonal from the upper right to lower left
			) {
			gameEnded = true; //end the game if someone won
			cout << "Game ended.\n";

			//determine who won the game
			if (POneTurn) {
				cout << "The Computer won!\n";
			}
			else {
				cout << "Player 1 won!\n";
			}
		}

		//check if field is full and it's a draw
		if (
			(fields[0] == 'x' || fields[0] == 'o') &&
			(fields[1] == 'x' || fields[1] == 'o') &&
			(fields[2] == 'x' || fields[2] == 'o') &&
			(fields[3] == 'x' || fields[3] == 'o') &&
			(fields[4] == 'x' || fields[4] == 'o') &&
			(fields[5] == 'x' || fields[5] == 'o') &&
			(fields[6] == 'x' || fields[6] == 'o') &&
			(fields[7] == 'x' || fields[7] == 'o') &&
			(fields[8] == 'x' || fields[8] == 'o')
			) {
			gameEnded = true;//game is a draw
			cout << "game ended with a draw\n";
		}
	}
}

int main() {
	int gameType;
	bool playing = true;
	char playAgain;

	while (playing) {

		cout << "let's play a game of tic tac toe! \n";
		cout << "Player vs Player     - 1\n";
		cout << "Player vs Computer   - 2\n";
		cin >> gameType;

		if (gameType == 1) {
			PvP();
		}
		else if (gameType == 2) {
			PvE();
		}

		cout << "That was fun! Do you want to play again? ( y / n )\n";
		cin >> playAgain;

		if (playAgain == 'y') {
			playing = true;
		}
		else {
			playing = false;
		}
	}
		return 0;
}
