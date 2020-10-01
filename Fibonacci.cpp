#include<iostream>

using namespace std;

int main()
{

int a = 0 , b =1 , c , n;
cout<<" Enter the number \n";
cin>> n ;
cout<<a <<"\n" << b <<"\n";

for( int i = 2 ; i < n ; i++)
{
   c = a+b ;
   cout<<c <<"\n";
   a=b ;
   b=c;
}


}
