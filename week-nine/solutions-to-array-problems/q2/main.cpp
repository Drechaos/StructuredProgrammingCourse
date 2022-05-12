// Write a program that will initialize an array of size 10 with 10 
// random integers. 
// Use a loop to print the values of the array to the screen.
// IPO
// Input - no input is required.
// Process
// - create an array of size 10 
// - use a loop to insert random values 
// - to print the values from the array, use a for or while loop 
// to print each value from the array.
// Output - random values from the array
#include <cstdlib>
#include <iostream>

using namespace std;

int main(){
    int nums[10];
    int highest_random_value = 20;
    srand(time(0)); // Seeding the random number generator
    for(int i = 0; i < 10; i++){
        nums[i] = rand() % highest_random_value;
    }

    for(int j = 0; j < 10; j++){
        cout << nums[j] << endl;
    }
    //system("pause");
    return 0;
}


