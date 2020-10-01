#include<iostream>
using namespace std;
int counter(int n,char *T1,char *T2,char *T3)
{
    if(n==1 )
    {
        return 1;
    }
    //recursive case
    int ans=1+counter(n-1,T1,T3,T2);
    int ans2=ans+counter(n-1,T2,T1,T3);
    return ans2;

}
void hanoi(int n,char *T1,char *T2,char *T3)
{
    if(n==0)
    {
        return;
    }
    //recursive case
    hanoi(n-1,T1,T3,T2);
    cout<<"Move "<<n<<"th disc from "<<T1<<" to "<<T3<<endl;
    hanoi(n-1,T2,T1,T3);

}
int main()
{
    cout<<"Enter number of disks in T1"<<endl;
    int n,steps=0;
    cin>>n;
    char a[10]="T1";
    char c[10]="T2"; //final
    char b[10]="T3"; //helper
    hanoi(n,a,b,c);
    cout<<counter(n,a,b,c);
}
