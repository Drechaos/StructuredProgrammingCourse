#include <iostream>
#include <fstream>
using namespace std;

int main(){
    string fileName = "records.txt";
    string id = "1000";
    string data = "Value";
    string salary = "1000.00";
    ofstream writeFilePtr(fileName, ios::in|ios::ate);
    if(writeFilePtr.is_open()){
        writeFilePtr << id << " " << data << " " << salary << endl;
        cout << "Data written to file successfully." << endl;
    }else{
        cout << "Error: Could not open " << fileName << endl;
    }
    writeFilePtr.close();
    //system("pause");
    return 0;
}