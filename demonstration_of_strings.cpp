//Author: Shaurya Chadha
//
//Date: 11/22/2024
//
//Antonation: To showcase the use of strings in C++. Note: strings are a derived data type and can also be implemented with char.
#include <iostream>


int main(void){
    std::string newstring;
    std::cout<<"Enter a string: ";
    //worse method: std::cin>>newstring;
    //the issue is that this string will not work if there are spaces in the input.
    //the solution is to use the geline function with one of the argument being cin
    //and the other being the variable that will hold that value
    getline(std::cin, newstring);
    std::cout<<"\nThe string you have entered is: ";
    std::cout<<newstring;
    
}
