// Write a class called Circle that will create a circle object. 
// The constructor of the circle should accept two parameters, 
// a character 'D' for diameter or 'R' representing radius. 
// The second parameter would be a diameter or radius value 
// which should be a float.
// The member function should calculate the area of the 
// circle by using either the radius or diameter supplied.
// An appropriate member variable should be declared within the 
// class to store the constant pi which is necessary to calculate 
// the area of the circle.


#include <iostream>

using namespace std;

class Circle{
    private: 
        float pi;
        float diameter;
    public:
        Circle(char measurement, float value){
            pi = 3.14;
            if((measurement == 'D') || (measurement == 'd')){
                diameter = value;
            }else if((measurement == 'R') || (measurement == 'r')){
                diameter = value * value;
            }
        }

        float area(){
            float result = diameter * pi;
            return result;
        }
};



int main(){
    float diameter;
    cout << "Enter a diameter value: " << endl;
    cin >> diameter;
    Circle circle('D', diameter);
    Circle secondCircle('R', 10);
    Circle thirdcircle('D', 40);
    thirdcircle.area();
    secondCircle.area();
    cout << circle.area() << endl;
    return 0;
}