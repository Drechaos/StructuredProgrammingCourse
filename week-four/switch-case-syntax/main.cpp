//Write a program that will accept from a user a letter grade between A and F. 
//Using the below, output the corresponding text to the screen:
// A - Excellent
// B - Good
// C - Average
// D - Below Average
// E - Requires Improvement
// F - Requires Resit 

#include <iostream>

using namespace std;

int main(){
    char letterGrade;
    cout << "Enter a letter grade A-F: ";
    cin >> letterGrade;
    switch (letterGrade)
    {
        case 'a':
        case 'A': cout << "Excellent" << endl; break;
        case 'b':
        case 'B': cout << "Good" << endl; break;
        case 'c':
        case 'C': cout << "Average" << endl; break;
        case 'd':
        case 'D': cout << "Below Average" << endl; break;
        case 'e':
        case 'E': cout << "Requires Improvement" << endl; break;
        case 'f':
        case 'F': cout << "Requires Resit" << endl; break;
        default: cout << "Invalid input" << endl; break;
    }
    cout << "Thanks for using our program." << endl;
    // system('pause'); for windows users
    return 0;
    
}

