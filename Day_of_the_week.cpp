//Date: 11/23/2024
//
//Author: Shaurya Chadha
//
//Annotation: Implementing a day of the week printer via different methods e.g loops (note: has no condition so it will print everything) and switch case.

//0,1,2,3,4,5,6 - these numbers represent the days of the week.
#include <iostream>

int main() {
    int array1[7];
    /*
    for(int i=0;i<7;i++){
        std::cout<<"Day of the week: "<<i;
    }*/
    int dayoftheweek = 3;
    switch(dayoftheweek){
        case 0:
        std::cout << "Monday";
        break;
        
        case 1:
        std::cout << "Tuesday";
        break;
        case 2:
        std::cout << "Wednesday";
        break;
        
        case 3:
        std::cout << "Thursday";
        break;
        
        case 4:
        std::cout << "Friday";
        break;
        
        case 5:
        std::cout << "Saturday";
        break;
        
        case 6:
        std::cout << "Sunday";
        break;
        
        default:
        std::cout << "Out of bounds, exiting switch case.";
        break;
        
    };
    return 0;
}
