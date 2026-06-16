#include <iostream>
#include <string>
using namespace std;

class Inventories{
    public : 
    string goods;
    string description;
    int amount;

    void Result_Inventories(){
        cout << "This is program of repository \n";
        cout << "Input name of goods : ";
        cin >> goods;
        cout << "Input of description of goods : ";
        cin >> description;
        cout << "Input total of good : ";
        cin >> amount;

        cout << "The result is : " << goods << ", " << description << ", " << amount << "\n";
    };
};

// make a main program 
int main (){
    Inventories result;

    // call a function 
    result.Result_Inventories();
    return 0;
}


