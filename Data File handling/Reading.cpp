 #include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main(){
    system("cls");
    fstream xyz;
    xyz.open("apple.txt",ios::in);
    if(!xyz){
        cout<<"not exist";
    }
    else{
            char a;
            while (1)
            {
                xyz>>a;
                if(xyz.eof())
                    break;
                cout<<a;
            }
    }
    xyz.close();
    return 0;
}