/*Friend Class, Declaring Rectangle class as friend of square class, and accessing & manipulating 
the vals of Square class in Rectangle class  */
#include <iostream>
using namespace std;

//Declaration of classes
class Rectangle;
class Square;

class Square{
    float side;
    //Declaration of friend class
    friend class Rectangle;

    public:
        Square() : side() {} //Default Constructor
        Square(float s) : side(s) {} //Perameterized Constructor
        void setSide(float s);
};
//Function to set vals to Side class
void Square::setSide(float s){
    side = s;
}

//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXx
class Rectangle{
    float hieght;
    float width;

    public:
        Rectangle () : hieght(), width() {} //Default Constructor
        //Perameterized Constructor
        Rectangle (float h, float w) : hieght(h), width(w){} 
        //Area Function declaration
        void Area(Square &sq); 
        //Declaration of setSquareSide(square object, side)
        void setSquareSide(Square &sq, float s);

        void setRectangle(float h, float w);
};

//Method defination
void Rectangle::Area(Square &sq) {
    
    //Area of square
    cout << "Area of Square: " << sq.side * sq.side << endl;
    //Area of Rectangle
    cout << "Area of Rectangle: " << hieght * width << endl << endl;
}

 //Accessing directly side of Square class through Rectangle class
 // Cause it's a friend of square class
void Rectangle::setSquareSide(Square &sq, float s){ //setSquareSide(square object, side)
    sq.side = s;
}
//Function to set vals to Side class
void Rectangle::setRectangle(float h, float w){
    hieght = h;
    width = w;
}

int main() {
    Rectangle R; //Rectangle object
    R.setRectangle(4, 6); //setting vals to Rectangle class

    Square S;
    R.setSquareSide(S, 4); 
    R.Area(S);
}