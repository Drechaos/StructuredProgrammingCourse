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

        float perimeter(){
            float result = 2*(_length + _width);
            return result;
        }

        float area(){
            float result = _length * _width;
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
    cout << r.area() << endl;
    cout << r.perimeter() << endl;
    return 0;
}