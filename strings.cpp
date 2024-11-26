//Author: Shaurya Chadha
//
//Date: 11/26/2024
//
//Antonation: CPP Program to demonstrate the use of strings along with the getline function to take string input with space characters.
#include <iostream>

using namespace std;

int main()
{
    string name;
    char x;

    cout << "Please enter your name: ";
    getline(cin,name);
    
    cout << "you have entered " << name << ", is this correct? [Y/N]: ";
    cin >> x;
    if(x =='Y'){
        cout <<"Input successful, exiting program.";
    }else if(x =='N'){
        cout << "Input not successful, exiting program.";
        string name = "";
        //cout << "New value of name: " <<name;
    }
    return 0;
}
