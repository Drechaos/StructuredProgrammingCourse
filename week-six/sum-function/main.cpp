#include <iostream>

using namespace std;

/* Write a function that will return the sum of two integers. */
// Function data type - integer
// Pass two integers 
// Name of function - sum

int sum(int num, int numone){
    int result = num + numone; 
    return result;
}

int main(){
    int inputOne, inputTwo;
    cout << "Enter number one: ";
    cin >> inputOne;
    cout << "Enter number two: "; 
    cin >> inputTwo;
    int result = sum(inputOne, inputTwo);
    cout << "The sum is: " << result;
    //system('pause');
    return 0;
}