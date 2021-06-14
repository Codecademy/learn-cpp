/*#include<iostream>
#include<stdio.h>
#include<conio.h>*/
#include<fstream>
#include<bits/stdc++.h>
using namespace std;
int main (){
    fstream xyz;
    xyz.open("abc",ios::out);
    cout<<"created xyz named file";
    xyz.close();
    return 0;
}