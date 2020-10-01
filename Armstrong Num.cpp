#include<iostream> 
#include <string>
#include <bits/stdc++.h> 
using namespace std;

int main()
{
int n , degree , temp , sum = 0 , digit;

cout<<"Enter the number\n";
cin>>n;

//Armstrong number is a number whose sum of digits raised to power of degree of the number
// is equal to the number itself

string s = to_string(n);
degree = s.length();

temp = n;
while( temp !=0)
{
    
    digit = temp % 10 ;
    sum = sum + (int) pow(digit,degree) ;
    temp = temp/10 ;
}

if( n == sum)
  cout<< " Armstrong Number" ;
  
if( n != sum)
  cout<< " Not an Armstrong Number";

}
