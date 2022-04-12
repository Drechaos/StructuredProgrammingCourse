#include <iostream>

using namespace std;
/* Write a program that will print the menu below: 
    1. Start Game
    2. End Game
*/

// Function return value
// Name of function
// Data passed to function

// Functions defined by programmer
// should appear above the main function

// Curly brace represents body of the function. 
void menu(){
    //body of function
    cout << "1. Start Game" << endl << "2. End Game" << endl;
    //last line of a function is usually the return statement. 
    // in this function, there is no need for a return statement,
    // as the data type of the function is void. 
}

int main(){
    // To invoke the function we call it in the main function
    menu();
    //system('pause');
    return 0;
}