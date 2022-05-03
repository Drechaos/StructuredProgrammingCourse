#include <iostream>
#include <fstream>

using namespace std;

int main(){
    string fileName = "records.txt";
    string id;
    string firstname;
    string lastname;
    char exitCondition = 'y';
    ofstream writeFilePtr(fileName, ios::in|ios::ate);
    while(exitCondition == 'y'){
        cout << "Enter id: ";
        cin >> id;
        cout << "Enter first name: ";
        cin >> firstname;
        cout << "Enter last name: ";
        cin >> lastname;
        if(writeFilePtr.is_open()){
            writeFilePtr << id << " " << firstname << " " << lastname << endl;
            cout << "Data written to file successfully." << endl;
        }else{
            cout << "Error: Could not open " << fileName << endl;
        }
        cout << "Enter y to continue, e to exit";
        cin >> exitCondition;
    }
    writeFilePtr.close();
    //system("pause");
    return 0;
}