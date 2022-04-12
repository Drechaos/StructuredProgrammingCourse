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
    int result = findCube(3);
    cout << "Result of finding the cube of 3: " << result << endl;
    //system('pause');
    return 0;
}