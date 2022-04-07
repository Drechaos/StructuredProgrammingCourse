#include <iostream>
#include <fstream>

// The fstream library is required to access (read and write)
// files files in C++.
using namespace std;

int main(){
    string line;
    int id;
    string firstname;
    string lastname;
    float salary;
    string fileName = "records.txt";
        
    ifstream readFilePtr(fileName);
    if(readFilePtr.is_open()){
        //Process the contents of the file
        while(readFilePtr >> id >> firstname >> lastname >> salary){
            cout << id << " " << firstname << " " << lastname << " " << salary << endl;
        }
     }else{
         cout << "Unable to open file " << fileName << endl;
     }
    return 0;
}