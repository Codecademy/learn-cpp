/*

	Author: AnOnYmOus001100
	Date: 22/09/2020

Bleep
“You don’t have to burn books to destroy a culture. Just get people to stop reading them.” - Ray Bradbury 

Congratulations on your new job at the Department of Re-education! You have been tasked with building an algorithm that can bleep out any words deemed unsavory by the powers that be.

Write a bleep.cpp program that “bleeps” any word that’s passed in. You’ll test this out with "broccoli", which has been recently banned by the Department.

Turn some text like "I'm rolling up my broccoli" into "I'm rolling up my ********".

Make sure to use pass-by-reference in your functions so you can modify the incoming text!

Tasks

Getting started:
1.
First include <iostream> and <string> because you are definitely going to need them, as well as a main() function.


2.
Inside main(), create two std::string variables:

word with a value of "broccoli".
text with a longer text with multiple "broccoli"s in it.

Create a bleep() function:
3.
Write a bleep() function that takes in the word and text and replace each word with asterisks *.

And make sure to use pass-by-reference so you can modify the text.

This is an algorithms problem that will require some planning beforehand so take some time and brainstorm how to do this on paper before start writing the code! A nested loop might be required.

Project walkthrough:
4.
Project walkthrough video coming soon!

*/

#include <iostream>
#include <string>
#include "functions.hpp"

int main()
{
  // intializing word and text
  std::string word = "broccoli";
  std::string text = "I like eating broccoli, broccoli is good for health, broccoli is eaten widely in Asia.";

// calling bleep function with word and string, displaying replaced text
std::cout<< bleep(word,text);

return 0;
}


