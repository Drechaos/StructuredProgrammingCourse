// Declare a class called Employee. 
// The class should have data members (variables) to 
// store the employee's name, 
// hourly rate, and hours worked. The class should have members 
// functions to perform the following tasks:

// A constructor function to initialize the hourly rate to a minimum 
// wage of $4.25 per hour and the hours worked to 0.
// A function to get the employee's name from the user.
// A function to return weekly pay, including overtime pay where 
// overtime is paid at a rate time-and-a-half for any hours worked over 40.

#include <iostream>

using namespace std;

class Employee{
    private:
        char name[10];
        float hourly_rate;
        float hours_worked;
    public:
        Employee(){
            hourly_rate = 4.25;
            hourly_worked = 0;
        }

        void getEmployeename(){
            cout << "Enter employee name:";
            cin >> name;
        }

        float calcWeeklyPay(){
            float overtime = 0;
            float pay;
            float overtimepay;
            overtime = hours_worked - 40;
            if(overtime > 0){
                overtimepay = overtime * 1.5 * hourly_rate;
                pay = overtimepay + (hourly_rate * hours_worked);
            }else{
                pay = hourly_rate * hours_worked;
            }
            return pay;
        }


}
int main(){
    Employee yuri();
    cout << yuri.calcWeeklyPay() << endl;
    return 0;
}