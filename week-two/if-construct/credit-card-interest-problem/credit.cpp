// The interest charged on credit card account depends on the remaining balance according to the following criteria: 
// Interest charged at 18% up to $500 and 15 percent for any amount over $500.
// Develop a program in C++ to find the total amount of interest due on any given account balance.  

// Input - account balance entered by the user through the keyboard
// Process 
// a. if the amount is less than 500, interest is calculated by multiplying the account balance by 18%
// b. if the amount is greater than 500, interest is calculated by multiplying the account balance by 18%. 
// The amount over 500 would be calculated by multiplying the difference between 500 and the account balance by 15%
// Output - the interest charged 

#include <iostream>

using namespace std;

int main(){
    float balance = 0;
    float interest = 0;
    cout << "Enter account balance: ";
    cin >> balance;
    if(balance <= 500){
        interest = 500 * .18;
    }else{
        interest = (500 * .18) + (.15 * (balance - 500));
    }
    cout << "The interest calculated on a balance of " << balance << " is " << interest << endl;; 
    //system("pause"); - included for windows users
    return 0;
}