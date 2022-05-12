//Write a program that will request from a user 10 scores of a exam. 
//The scores can range from 0 to 100. Use an array to store the exam scores. 
// From said array, retrieve the values from the array and determine:
//1. The average of the class
//2. Print the highest score

// IPO
// Input - 10 exam scores
// Process
// 1. create an array of size 10 to store the values
// 2. request from the user the 10 scores
// every time the user enters a score determine if its the highest
// 3. store score in the array 
// 4. sum the values of the array 
// 5. divide the sum of the values in the array by 10
// Output 
// - the average
// - largest score

#include <iostream>
using namespace std;

float findHighest(float currentValue, float highestValue){
    float newHighestValue;
    if(currentValue > highestValue){
        newHighestValue = currentValue;
    }else{
        newHighestValue = highestValue;
    }
    return newHighestValue;
}

int main(){
    float scores[10];
    float highestScore = 0;
    float score;
    float sum;
    float average;
    for(int i = 0; i < 10; i++){
        cout << "Enter score " << i+1 << ": " << endl;
        cin >> score;
        scores[i] = score;
        sum = sum + score;
        //sum += score;
        highestScore = findHighest(score, highestScore);
    }
    average = sum / 10;
    cout << "The average of the score is: " << average << endl;
    cout << "The highest score is: " << highestScore << endl;
    //sytem("pause");
    return 0;

}