#include <iostream>
#include <fstream>
using namespace std;
int main(){
    string line;
    int id;
    string firstname;
    string lastname;
    float salary;
    string fileName = "records.txt";
    ifstream readFilePtr(fileName);
    int recordCount = 0;
    if(readFilePtr.is_open()){
    //Process the contents of the file
        while(readFilePtr >> id >> firstname >> lastname >> salary){
            cout << id << "|" << firstname << "|" << lastname << "|" << salary << endl;
            recordCount++;
        }
        cout << recordCount << " records read from file. " << endl;
    }else{
        cout << "Unable to open file " << fileName << endl;
    }
    //sytem("pause");
    return 0;
}