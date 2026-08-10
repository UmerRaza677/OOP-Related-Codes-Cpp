//Calculate area of Circle, Rectangle etc shapes
//Using Shape as base class and other as derive classes
//use virtual keyword also
#include <iostream>
#include <string>
using namespace std;

//pure virtual Base class with Area function
class Shape{
    protected:
    virtual double Area() = 0;
};
// XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

class Circle: public Shape{
    double rad;

    public:
        Circle(double r) : rad(r) {}
        double Area() {
            return (3.1415) * (rad * rad);
        }
};
// XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

class Rectangle: public Shape{
    double hieght, width;

    public:
    Rectangle(double h, double w) : hieght(h), width(w) {}
        double Area() {
            return hieght * width;
        }
};
// XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

//function to calculate circle area
void calCircleArea(){
    Circle C(5);
    cout << "Circle Area: " << C.Area() << endl;
}

//function to calculate rectangle area
void calRectangleArea(){
    Rectangle R(10, 5);
    cout << "Rectangle Area: " << R.Area() << endl;
}


int main() {
    calCircleArea();
    calRectangleArea();

    return 0;
}