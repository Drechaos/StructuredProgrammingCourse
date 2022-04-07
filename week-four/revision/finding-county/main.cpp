/*
Input - Integers 1-3
Process - If the integer is 1 show “Cornwall”, if the integer is 2 show “Middlesex”, otherwise show “Surrey”
Output - The county represented by the integer. 
*/
#include <iostream>

using namespace std;

int main(){
    int choice; 
    cout << "Enter choice (1, 2 or 3): " << endl;
    cin >> choice;
    if(choice == 1){
        cout << "Cornwall" << endl;
    }else if(choice == 2){
        cout << "Middlesex" << endl;
    }else if(choice == 3){
        cout << "Surrey" << endl;
    }else{
        cout << "Invalid entry" << endl;
    }
    return 0;
}