#include <iostream>

using namespace std;

/* Write a function that will accept an integer and determine if the 
value is even or odd by printing "Is Even" or "Is Odd". */

// Input - integer (+ve or -ve)
// Process - if a number is divided by two and leaves no remainder, its even, otherwise
// its odd. 
// Output - "Is Even" or "Is Odd"

// Function return value
// Name of function
// Parameters 
void isEvenOrOdd(int value){
    if(value % 2 == 0){
        cout << "Is Even" << endl;
    }else{
        cout << "Is Odd" << endl;
    }
}

int main(){
    int value;
    cout << "Enter the value: ";
    cin >> value;
    isEvenOrOdd(value);
    //system('pause');
    return 0;
}