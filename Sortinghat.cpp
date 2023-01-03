#include<iostream>

int main(){ //variable declaration
  int gryffindor = 0;
  int hufflepuff = 0;
  int ravenclaw = 0;
  int slytherin = 0;
  int answer1,answer2,answer3,answer4;

std::cout<<"The Sorting Hat Quiz!\n";

std::cout<<"Q1)When I'm dead,I want people to   remember me as:\n"
  "1) The Good \n"
  "2) The Wise \n"
  "3)The Great\n"
  "4)The Bold\n";
std::cin>>answer1;//use of loop plus user input storage from use 
if(answer1==1){
  hufflepuff++;
}
else if(answer1==2){
  slytherin++;
}
else if(answer1==3){
  ravenclaw++;
}
else if(answer1==4){
  gryffindor++;
}
std::cout<<"Q2)Dawn or dusk?\n"
"1)Dawn\n"
"2)Dusk\n";
std::cin>>answer2;
if(answer2==1){
  hufflepuff++;
  gryffindor++;
}
else if(answer2==2){
  slytherin++;
  hufflepuff++;
}
std::cout<<"Q3)Which kind of instrument most pleases your ear?:\n"
  "1) The violin \n"
  "2) The trumpet \n"
  "3)The Piano\n"
  "4)The drum\n";
std::cin>>answer3;
if(answer3==1){
  hufflepuff++;
}
else if(answer3==2){
  slytherin++;
}
else if(answer3==3){
  ravenclaw++;
}
else if(answer3==4){
  gryffindor++;
}
std::cout<<"Q4)Which road tempts you most?:\n"
  "1) The wide ,sunny grassy lane \n"
  "2) The narrow,dark ,lantern-lit ally \n"
  "3)The twisting ,leaf-strewn path through woods\n"
  "4)The cobbled street lined (ancient buildings)\n";
std::cin>>answer4;
if(answer4==1 ){
  hufflepuff++;
}
else if(answer4==2){
   slytherin++;
}
else if(answer4==3){
  ravenclaw++;
}
else if(answer4==4){
  gryffindor++;
}
else {
  std::cout<<"invalid output";
}
int max = 0;//declare new variable to hold total input from all questions
std::string house;
if(gryffindor > max){
  max = gryffindor;
  house = "Gryffindor";
}
if(hufflepuff > max){
  max = hufflepuff;
  house = "Hufflepuff";
}
if(slytherin > max){
  max = slytherin;
  house = "Slytherin";
}
std::cout << house <<"!\n";//display to user house with max points 

return 0 ;
}

