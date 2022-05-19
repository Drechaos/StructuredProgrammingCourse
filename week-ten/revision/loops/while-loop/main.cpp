#include <iostream>

using namespace std;

int main(){
    char exitCondition = 'Y';
    float value;
    cout << "Enter a value. When finished, enter x to exit" << endl;
    while(exitCondition != 'x'){
        cout << "Enter a value:" << endl;
        cin >> value;
        cout << "Do you want to exit: " << endl;
        cin >> exitCondition;
    }
    return 0;
}