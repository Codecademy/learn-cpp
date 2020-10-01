#include<iostream>
using namespace std;


void  bubble(int *a,int n,int i,int j)
{
    if(i==n-1)
    {
        return ;
    }
    if(j==n-i-1)
    {
        bubble(a,n,i+1,0);
        return ;
    }
    if(a[j]>a[j+1])
    {
        swap(a[j],a[j+1]);
    }
    bubble(a,n,i,j+1);

}
int main()
{
    cout<<"Enter Array length"<<endl;
    int a[100];
    int n;
    cin>>n;
    cout<<"Enter Array elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    bubble(a,n,0,0);
    cout<<"Sorted Array is "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
