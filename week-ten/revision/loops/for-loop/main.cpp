#include <iostream>

using namespace std; 

int main(){
    // create an array of float values with size 10;
    float measurements[10];
    float measurement;
    // two ways to add data to an array
    // using a loop 
    // directly accessing the index

    cout << "Enter a value: "<< endl;
    cin >> measurements[0];
    cout << "Enter a value: " << endl;
    cin >> measurement;
    measurements[1] = measurement;

    for(int i=0;i < 10;i++){
        measurements[i] = 20;
        cout << measurements[9] << endl;
    }
    return 0;
}