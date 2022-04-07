//Write a program that will accept from a user a letter grade between A and F. 
//Using the below, output the corresponding text to the screen:
// A - Excellent
// B - Good
// C - Average
// D - Below Average
// E - Requires Improvement
// F - Requires Resit 
// Modify the below program such that a user can enter lower case letters A-F.

#include <iostream>

using namespace std;

int main(){
    char letterGrade;
    cout << "Enter a letter grade A-F: ";
    cin >> letterGrade;
    switch (letterGrade)
    {
        case 'A': cout << "Excellent" << endl; break;
        case 'B': cout << "Good" << endl; break;
        case 'C': cout << "Average" << endl; break;
        case 'D': cout << "Below Average" << endl; break;
        case 'E': cout << "Requires Improvement" << endl; break;
        case 'F': cout << "Requires Resit" << endl; break;
        default: cout << "Invalid input" << endl; break;
    }
    // system('pause'); for windows users
    return 0;
    
}