#include <iostream>

using namespace std;

/*
Function defined before the main function. 
*/

int findCube(int value){
    return x * x * x;
}

int main(){
    int result = findCube();
    cout << "Result of finding the cube of 3: " << result << endl;
    return 0;
}