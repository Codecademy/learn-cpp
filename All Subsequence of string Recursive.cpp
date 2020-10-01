#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
string arr[100];
int c=0;
int count1=0;
void subs(char *in,char *out,int i,int j)
{
    if(in[i]=='\0')
    {
        out[j]='\0';
        //strcpy(arr[count1],out);
        arr[c]=out;
        c++;

        return;
    }
    out[j]=in[i];
    subs(in,out,i+1,j+1);
    subs(in,out,i+1,j);
}
using namespace std;
int  main()
{
    cout<<"Enter Number of Inputs"<<endl;
    int n;
    cin>>n;

    for (int k=0;k<n;k++)
    {
        cout<<"Enter string (Number - "<<k+1<<")"<<endl;
        char ch[100],out[100];
        cin>>ch;
        subs(ch,out,0,0);
        sort(arr,arr+c);
        for(int i=0;i<c;i++)
        {
            cout<<arr[i]<<endl;
        }
          c=0;
    }

}
