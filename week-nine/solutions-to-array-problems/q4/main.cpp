// Write a program that will initialize an array with 20 random integers. 
// The program will request from the user an integer and once entered, 
// the program will search the array to determine if the integer entered 
// matches any 
// value found in the array. Inform the user whether or not the value was 
// found in 
// the array and print the content of the array showing the user all 
// values stored.

// IPO 
// Input - integer 
// Process
// 1. Step through the array index by index comparing the integer 
// the user entered 
// with the value at the particular index. 
// Output - "Value found in array" or "Value not found in array."
//        - the contents of the array

#include <iostream>
#include <ctime>
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
    while(j < 20){
        if(userInput == nums[j]){
            found = true;
        }
        j++;
    }

    for(int k = 0; k < 20; k++){
        cout <<  "|" << nums[k];
    }

    if(found == true){
        cout << "\nValue " << userInput << " found in array." << endl;
    }else{
        cout << "\nValue " << userInput << " not found in array." << endl;
    }
    return 0;
}