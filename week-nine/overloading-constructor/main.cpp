#include <iostream>

using namespace std;
// Class definition is completed outside 
// and above the main function.
class Rectangle{
    // The word private indicates the variable 
    // cannot be accessed outside the class.
    private:
        float _length;
        float _width;
        float _side;
    
    // The word public signifies that the method
    // can be accessed outside the class.
    public:
        // The constructor function is a special
        // function that is used to initialize an
        // object automatically when the object is 
        // defined. 
        Rectangle(float length, float width){
            _length = length;
            _width = width;
        }

        Rectangle(float side){
            _side = side;
        }

        float perimeter(){
            float result;
            if(_length > 0 && _width > 0){
                result = 2*(_length + _width);
            }else{
                result = 4 * _side;
            }
            return result;
        }

        float area(){
            float result;
            if(_length > 0 && _width > 0){
                result = _length * _width;
            }else{
                result = _side * _side;
            }
            return result;
        }
        // A destructor is the counterpart of an 
        // constructor and is used to "clean up"
        // an object after it is no longer needed.
        ~Rectangle(){}

};

int main(){
    // Using the name of the 
    // class, we can create an object 
    // named rectangle passing 
    // parameters 10 and 20 representing
    // the width and length
    Rectangle rectangle(10, 20);
    Rectangle square(5);
    cout << rectangle.area() << endl;
    cout << rectangle.perimeter() << endl;
    cout << square.area() << endl;
    return 0;
}