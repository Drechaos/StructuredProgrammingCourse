#include <iostream>

using namespace std;

int main(){
    // - only need a condition to start and stop
    int i = 1;
    while(i < 11){
        cout << i << endl;
        i++;
        cout << "While loop runs" << endl;
    }
    cout << "Printed after loop ends" << endl;
    //system('pause');
    return 0;
}