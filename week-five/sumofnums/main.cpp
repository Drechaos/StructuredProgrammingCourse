#include <iostream>

using namespace std;

int main(){
    int sum;
    int num;
    cout << "Enter number";
    cin >> num;
    sum+=num;
    cout << "Enter number";
    cin >> num;
    sum = sum + num;
    cout << "The sum of values entered is: " << sum << endl;
    return 0;
}