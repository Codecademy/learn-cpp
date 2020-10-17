#include<iostream>
using namespace std;
bool rat(char maze[10][10],int sol[10][10],int i,int j,int n,int m)  //n m for the matrix n X (m columns)
{
    //base case
    if(i==n-1 && j==m-1)
    {
        sol[i][j]=1;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cout<<sol[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        return false;    //return false prints all paths
    }


    sol[i][j]=1;
    if(j+1<m  && maze[i][j+1]!='X')
    {
        if(rat(maze,sol,i,j+1,n,m))  // if right next path is available
        {
            return true;
        }

    }
    if(i+1<n && maze[i+1][j]!='X')
    {
        if(rat(maze,sol,i+1,j,n,m)) // if next down path is available
        {
            return true;
        }
    }
    sol[i][j]=0;
    return false;


}
int main()
{
    // MAZE 4x4
    // 'X' means obstacle
    //'0' means can be traversed
    char maze[10][10]={"0000","00XX","0000","XX00"};
    int sol[10][10]={{0}};  // if 1 means rat went through that path
    cout<<"Paths available for rat to traverse are as follows "<<endl<<endl;
    rat(maze,sol,0,0,4,4);
}
