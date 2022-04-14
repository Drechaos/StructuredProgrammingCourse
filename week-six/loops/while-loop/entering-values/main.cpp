#include <iostream>

using namespace std;

/*
Write a program that will accept integers, find the sum of all integers entered
and print the average. The user will indicate that he or she wishes not to 
enter any more values by entering the character 'e'.
*/
int main(){
    int inputs = 0;
    int sum;
    int count = 0; 
    char charInput = 'd';
    while(charInput != 'e'){
        cout << "Enter value: ";
        cin >> inputs;
        sum = sum + inputs;
        count = count + 1;
        cout << "Would you like to contine: ";
        cin >> charInput;
    }
    cout << sum << endl;
    cout << (sum / count) << endl;
    //system('pause');
    return 0;
}