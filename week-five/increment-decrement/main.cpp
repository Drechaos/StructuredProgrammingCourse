#include <iostream>

using namespace std;

int main(){
    int x = 5;
    int y = 0;
    int i = 10;
    int j = 0;
    y = x++;
    cout << "**Result of Post Increment**" << endl;
    cout << "Value of y: " << y << endl; 
    cout << "Value of x: " << x << endl;
    x = 5;
    y = 0;
    y = ++x;
    cout << "**Result of Pre Increment**" << endl;
    cout << "Value of y: " << y << endl; 
    cout << "Value of x: " << x << endl;
    x = 5;
    y = 0;
    y = --x;
    cout << "**Result of Pre Decrement**" << endl;
    cout << "Value of y: " << y << endl; 
    cout << "Value of x: " << x << endl;
    x = 5;
    y = 0;
    y = x--;
    cout << "**Result of Post Decrement**" << endl;
    cout << "Value of y: " << y << endl; 
    cout << "Value of x: " << x << endl;
    return 0;
}