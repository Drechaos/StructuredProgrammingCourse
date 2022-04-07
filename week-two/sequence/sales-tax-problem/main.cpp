// Comment - text added to a program which is not displayed or processed by the compiler.
// Develop a C++ program to find the amount of sales tax and the total cost of a sales item including tax. 
// Assume the sales tax rate is 16.5% and the user will enter the cost of the item. 
// Problem Decomposition 
// Input - the cost of the item to be entered by the user through a keyboard
// Processing
// a. Tax is computed by multiplying the cost of the item by 0.165 
// b. The total cost of the item is derived by finding the sum of the cost of the sales item and the calculated tax at (a) above
// Output - the total cost of the item

#include <iostream> // critical component of scaffolding

using namespace std; // non-critical component of scaffolding 

// main function - critical component of scaffolding 
int main(){
    float cost = 0; // declaring a variable with data type float
    float taxrate = 0.165;
    float tax = 0;
    float totalcost = 0;
    //std::cout << "Enter the cost of the item"; // std:: would preface the cout command if the using namespace declaration is not added
    cout << "Enter the cost of the item: "; // output statement 
    // Input 
    cin >> cost; // input statement 
    //Processing 
    tax = cost * taxrate;
    totalcost = cost + tax;
    //cout << "The total cost of the item is: " << totalcost << endl;
    cout << "The total cost of " << cost << " is " << totalcost << endl;
    cout << "The tax calculated was: " << tax << " using a tax rate of " << taxrate << endl;
    //cout << totalcost; valid way to output contents of a variable 
    return 0; // non-critical component of scaffolding
}

// brackets/braces
// curly braces {}
// parenthesis ()
// angular brackets < >
// square brackets [ ]

