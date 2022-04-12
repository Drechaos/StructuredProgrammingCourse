#include <iostream>

using namespace std;

// Function return value - int 
// Name of function - findCube
// Data passed to function - value 

int findCube(int value){
    int result = value * value * value;
    return result;
}

int main(){
    int value;
    cout << "Enter a value: ";
    cin >> value;
    int result = findCube(value);
    cout << "Result of finding the cube of " << value << " is: " << result << endl;
    //system('pause');
    return 0;
}