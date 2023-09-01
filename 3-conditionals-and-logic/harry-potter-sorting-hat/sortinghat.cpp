// Project Case C++ (Sorting Hat Program Harry Potter) 
#include <iostream>

int main (){
  // declare & initialize 4 varible to receive point 
  int gryffindor = 0;
  int hufflepuff = 0;
  int ravenclaw = 0;
  int slytherin = 0;

  // declare 4 answer variable to store their anwer for question
  int answer1, answer2, answer3, answer4;

  std::cout << "=========================\n";
  std::cout << "The sorting Hat Quiz \n";
  std::cout << "=========================\n";

  // make instrument for question3 
  std::cout << "Q1) When I'm dead, I want people to remember me as :\n";
  std::cout << "1) The Good \n";
  std::cout << "2) The Great \n";
  std::cout << "3) The Wise \n";
  std::cout << "4) The Bold \n";
  std::cout << "Answer Q1) : " ;
  std::cin >> answer1;
  std::cout << "\n";

  // Make conditional logic decision for answer1
  if (answer1 == 1){
    hufflepuff++;
  } else if (answer1 == 2){
    slytherin++;
  } else if (answer1 == 3){
    ravenclaw++;
  } else if (answer1 == 4){
    gryffindor++;
  } else {
    std::cout << "Invalid input \n";
  }

  // Make instrument for question 2
  std::cout << "Q2) Dawn or Dusk \n";
  std::cout << "1) Dawn\n";
  std::cout << "2) Dusk\n";
  std::cout << "Answer Q2) : ";
  std::cin >> answer2;
  std::cout << "\n";

  // Make conditional logic decision for answer2
  if (answer2 == 1){
    gryffindor++;
    ravenclaw++;
  } else if (answer2 == 2){
    hufflepuff++;
    slytherin++;
  } else {
    std::cout << "Invalid input \n";
  }

  // Make something for question3
  std::cout << "Q3) Which kind of instrument most pleases your ear? \n";
  std::cout << "1) The violin \n";
  std::cout << "2) The trumpet \n";
  std::cout << "3) The piano \n";
  std::cout << "4) The drum \n";
  std::cout << "Answer Q3 : ";
  std::cin >> answer3;
  std::cout << "\n";

  // Make conditional logic decision3 for answer3
  if(answer3 == 1){
    slytherin++;
  } else if (answer3 == 2){
    hufflepuff++;
  } else if (answer3 == 3){
    ravenclaw++;
  } else if (answer3 == 4){
    gryffindor++;
  } else {
    std::cout << "Invalid input \n";
  }

  // Make something for question 4
  std::cout << "Q4) Which road tempts you most?\n";
  std::cout << "1) The wide, sunny grassy lane \n";
  std::cout << "2) The narrow, dark, lantern-litalley \n";
  std::cout << "3) The twisting, leaf-strewn path through woods \n";
  std::cout << "4) The cobbled street lined (ancient buildings) \n";
  std::cout << "Answer 4 :";
  std::cin >> answer4;
  std::cout << "\n";

  // make conditional logic decision4 answer4
  if (answer4 == 1){
    hufflepuff++;
  } else if (answer4 == 2){
    slytherin++;
  } else if (answer4 == 3){
    gryffindor++;
  } else {
    std::cout << "Invalid input \n";
  }

  // Find out which if the four houses has heigh answer
  int max = 0;
  std::string house;

  // Make a logical conditional to find maximum 
  if (gryffindor > max){
    max = gryffindor;
    house = "Gryffindor";
  }

  if (hufflepuff > max){
    max = hufflepuff;
    house = "Hufflepuff";
  }

  if (ravenclaw > max){
    max = ravenclaw;
    house = "Ravenclaw";
  }

  if (slytherin > max){
    max = slytherin;
    house = "Slytherin";
  }

  std::cout << house << "!\n";
  std::cout << "Thank You For Your attention \n";

return 0;
}
