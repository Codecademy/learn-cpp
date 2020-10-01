#inlcude<iostream>

int main()
{
int n , fact =1 ;
cout<<"Enter the number to find factorial of"
cin>> n ;


for(int i = 1 ; i <= n ; i++)
{
   fact = fact * i ;
}

cout<<fact ;
}
