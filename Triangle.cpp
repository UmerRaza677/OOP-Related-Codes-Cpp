/*Write a C++ program to create a class called Triangle that has private member
variables for the lengths of its three sides. Implement member functions to 
determine if the triangle is equilateral, isosceles, or scalene. 

An equilateral triangle is a triangle in which all three sides are equal.
A scalene triangle is a triangle that has three unequal sides.
An isosceles triangle is a triangle with (at least) two equal sides.
*/

#include<iostream>
#include<string>
using namespace std;

class Triangle{
    float side1, side2, side3;

    public:
        
        void setSides(){
            cout << "Enter 1st side: ";
            cin >> side1;
            cout << "Enter 2nd side: ";
            cin >> side2;
            cout << "Enter 3rd side: ";
            cin >> side3;
        }

        bool Equilateral(){
            if(side1 == side2 && side2 == side3) return true;
            return false;
        }

        bool Isosceles(){
            if(side1 == side2 || side2 == side3 || side1 == side3) return true;
            return false;
        }
};

void checkTriangle(){
    Triangle T;
    T.setSides();
    if(T.Equilateral()) cout <<"It's a Equilateral triangle." << endl;
    else if(T.Isosceles()) cout <<"It's a Isosceles triangle." << endl;
    else cout <<"It's a Scalene triangle." << endl;
}

int main(){
    checkTriangle();
    return 0;
}