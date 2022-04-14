#include <iostream>

using namespace std;

int main(){
    // For loop
    // Three components of the for loop 
    // 1 - initialization (optional) - where are you starting your loop. 
    // 2 - condition (mandatory) 
    //      - the loop will become infinite without a condition.
    //      - the condition is required such that the loop will 
    //        execute. 
    // 3 - incrementation or update (mandatory)
    //     - prevents the loop from being infinite
    //     - changes the value of the loop variable such that the condition 
    //     can ultimately be met to stop. 
    
    for(int i = 1; i < 11;i++){
        cout << i << endl;
    }
    //system('pause');
    return 0;
}