/* 
	Author: AnOnYmOus001100
	Date: 08/09/2020

Convert Puppy years to Human baby years
*/

#include<iostream>

int main() {
  
  // setting puppy_age to 5 months(0.5)
  int puppy_age = 0.5;
  int early_years, later_years, baby_years;
  
  // setting early_years to 5
  early_years = 5;

  // calcuating later_years
  later_years = (puppy_age - 0.2) * 2;

  // converting puppy years to human years
  baby_years = early_years + later_years;

  std::cout<<"My name is Brooh!  Ruff ruff, I am "<< baby_years <<" years old in human baby years.";

  return 0;
}
