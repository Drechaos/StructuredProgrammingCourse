#include <iostream>

using namespace std;

/* Write a program that will find all even numbers and odd numbers between 1 and 10 (inclusive). */
int main(){
   
    for(int i = 1; i < 11;i++){
        if(i % 2 == 0){
            cout << i << " is even." << endl;
        }else{
            cout << i << " is odd."  << endl;
        }
    }
    //system('pause');
    return 0;
}