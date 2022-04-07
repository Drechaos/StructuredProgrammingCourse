/*
Input - Three values. The values could be an integer or float as no data type could be gleaned from the question. 
Process - Find the sum of all values. Divide the sum of the values by count of the values (3) to find the average.
Output - Print the average. 
*/
#include <iostream>

using namespace std;

int main(){
    float numone, numtwo, numthree, average;
    cout << "Enter three numbers: " << endl; 
    //cin >> numone >> numtwo >> numthree; - nicer way of accepting multiple inputs
    cin >> numone;
    cin >> numtwo;
    cin >> numthree;
    average = (numone + numtwo + numthree) / 3;
    cout << "The average of the values entered is " << average << endl;
    return 0;
}