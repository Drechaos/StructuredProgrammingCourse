#include <iostream>
using namespace std;

int main(){
    int max = 10;
    // Declaring array sample of size 10.
    int sample[10];
    cout << "Enter a list of " << max << " values and press ENTER key after each entry." << endl;
    // The variable i will represent the indices of the array.
    // After each iteration of the loop the value entered by the user 
    // will be stored at the index denoted by the value i. 
    for(int i = 0; i < max; i++){
        cin >> sample[i];
    }
    system("pause");
    return 0;
}