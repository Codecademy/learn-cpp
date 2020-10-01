#include<iostream>
using namespace std;
bool sort(int *arr,int n,int i)
{
    if(i==n-1)
    {
        return true;
    }
    if(arr[i]>arr[i+1])
    {
        return false;
    }
    sort(arr,n,i+1);
}
int main()
{
    cout<<"Enter size of array"<<endl;
    int n;

    cin>>n;
    cout<<"Enter Numbers"<<endl;
    int arr[10000];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    if(sort(arr,n,0))
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
}
