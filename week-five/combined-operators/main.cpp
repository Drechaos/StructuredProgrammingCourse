#include <iostream>

using namespace std;

int main(){
    int x, y;
    int a, b;
    cout << "Enter values for x and y: ";
    cin >> x >> y;
    a = x;
    b = y;
    cout << "result of combined addition: " << (x += y) << endl;
    a = a + b;
    cout << "result of combined addition: " << a << endl;
    //system('pause'); for windows users
    return 0;
}