// Write a program that will initialize an array with 20 random integers. 
// The program will request from the user an integer and once entered, 
// the program will search the array to determine if the integer entered matches any 
// value found in the array. Inform the user whether or not the value was found in 
// the array and print the content of the array showing the user all values stored.

// IPO 
// Input - integer 
// Process
// 1. Step through the array index by index comparing the integer 
// with the value at the particular index. 
// Output - "Value found in array" or "Value not found in array."

#include <iostream>

using namespace std;

int main(){
    int nums[20];
    int highest_random_value = 40;
    int userInput;
    bool found = false;
    int j = 0;
    srand(time(0));
    for(int i = 0; i < 20; i++){
        nums[i] = rand() % highest_random_value;
    }
    cout << "Enter an integer: ";
    cin >> userInput;
    while(j < 10){
        if(userInput == nums[j]){
            found = true;
        }
        j++;
    }
    if(found == true){
        cout << "Value " << userInput << " found in array." << endl;
    }else{
        cout << "Value " << userInput << " not found in array." << endl;
    }
    return 0;
}