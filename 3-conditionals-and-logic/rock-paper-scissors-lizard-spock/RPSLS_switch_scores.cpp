// Author: Ali Parandeh
// Github: https://github.com/Ali-Parandeh/csharp-cpp-projects/tree/master/Rock%20Paper%20Scissors%20Lizard%20Spock

/* GAME LOGIC

Scissors cut Paper
Paper covers Rock
Rock crushes Lizard
Lizard poisons Spock
Spock smashes Scissors
Scissors decapitate Lizard
Lizard eats Paper
Paper disproves Spock
Spock vaporizes Rock
Rock crushes Scissors

*/

#include <iostream>
#include <stdlib.h>

// Defining structs for returning results
struct Results {
  int user_score;
  int computer_score;
  std::string result;
};

// function declaration
std::string TranslateChoice(int choice)
{
  switch(choice)
  {
    case 1:
      return "✊";
      break;
    case 2:
      return "✋";
      break;
    case 3:
      return "✌️";
      break;
    case 4:
      return "👌";
      break;
    case 5:
      return "🖖";
      break;
    default:
      break;  
  }
}

void AnnounceResults(int user, int computer, std::string result)
{
    std::cout <<"You chose: " << TranslateChoice(user) << "\n";
    std::cout <<"Computer chose: " << TranslateChoice(computer) << "\n";
    std::cout <<"And the result is as follows: " << result << "\n";
}

Results PlayWithComputer(int user, int computer, int user_score, int computer_score)
{
  if (user == computer)
  {
    return {user_score, computer_score,"It is a draw!"};
  }
    
  switch (user)
  {
    case 1: // Rock
      if (computer == 3 || computer == 4) // Scissors & Lizard
      {
        user_score++;
        return {user_score, computer_score, "You Win!"};
      }
      else 
      {
        computer_score++;
        return {user_score, computer_score,"You Lose!"};
      }
      break;
      
    case 2: // Paper
      if (computer == 1 || computer == 5) // Rock & Spock
      {
        user_score++;
        return {user_score, computer_score,"You Win!"};
      }
      else
      {
        computer_score++;
        return {user_score, computer_score,"You Lose!"};
      }
      break;
      
    case 3: // Scissors
      if (computer == 2 || computer == 4) // Paper & Lizard
      {
        user_score++;
        return {user_score, computer_score,"You Win!"};
      }
      else 
      {
        computer_score++;
        return {user_score, computer_score,"You Lose!"};
      }
      break;
      
    case 4: // Lizard
      if (computer == 2 || computer == 5) // Paper & Spock
      {
        user_score++;
        return {user_score, computer_score,"You Win!"};
      }
      else 
      {
        computer_score++;
        return {user_score, computer_score,"You Lose!"};
      }
      break;
      
    case 5: // Spock
      if (computer == 1 || computer == 3) // Rock & Scissors
      {
        user_score++;
        return {user_score, computer_score,"You Win!"};
      }
      else
      {
        computer_score++;
        return {user_score, computer_score, "You Lose!"};
      }
      break;
      
    default:
      std::cout << "INVALID INPUT. TRY AGAIN.\n";
      return {user_score, computer_score,"0"};
      break;
  }
}



Results StartGame(int user_score, int computer_score)
{
  srand (time(NULL));
  int user = 0, computer = rand() % 5 + 1;
  
  std::cout << "Game Starting.\n";
  std::cout << "1) ✊\n"; // Rock
  std::cout << "2) ✋\n"; // Paper
  std::cout << "3) ✌️\n"; // Scissors
  std::cout << "4) 👌\n"; // Lizard
  std::cout << "5) 🖖\n"; // Spock
  std::cout << "shoot! ";
  
  std::cin >> user;
  if(user <=0)
  {
    return {user_score, computer_score, "0"};
  }
  auto results = PlayWithComputer(user, computer, user_score, computer_score);
  AnnounceResults(user, computer, results.result);
  return results;
}

int main()
{
  Results results;
  results.user_score = 0;
  results.computer_score = 0;
  int score_limit;
  
  std::cout << "=================================\n";
  std::cout << "rock paper scissors Lizard Spock!\n";
  std::cout << "=================================\n";
  
  std::cout << "Set a winning target.\n";
  std::cin >> score_limit;
  if(score_limit <= 0 )
  {
    std::cout << "INVALID INPUT. TRY AGAIN.\n";
    return 0;
  }
  
  while (results.user_score != score_limit && results.computer_score != score_limit)
  {
    results = StartGame(results.user_score, results.computer_score);
    if (results.result == "0")
    {
      std::cout << "INVALID INPUT. TRY AGAIN.\n";
      return 0;
    }
    std::cout << "Great round! Here's the game status so far: \n";
    std::cout << "Your wins: " << results.user_score << "   Computer Wins: " << results.computer_score << "\n";
  }
  
  std::cout << "GAME OVER!\n";
  if(results.user_score > results.computer_score)
  {
    std::cout << "YOU WON!!! TO A COMPUTER - CONGRATULATIONS!\n";
  }
  else
  {
    std::cout << "YOU LOST!!! TO A COMPUTER - GO CRY NOW!\n";
  }
  return 0;
}
