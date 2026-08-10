/*Write a C++ program that uses classes and objects to calculate the area of a rectangle, circle, or square 
based on the user's choice and the dimensions they provide.*/
#include <iostream>
#include <cmath>
using namespace std;

//class, to calculate the area of different shapes
class Shape{
    private:

        double radius;
        double width;
        double length;

    public:

        int getRadius(){            //Getter
            return radius;
        }

        void setRadius(int rad){    //Setter
            radius = rad;
        }


        int getLength(){            //Getter
            return length;
        }

        void setLength(int len){    //Setter
            length = len;
        } 
        

        int getWidth(){             //Getter
            return width;
        }

        void setWidth(int wid){     //Setter
            width = wid;
        }
};

int main() {

    Shape sh;

    int choice;
    cout << "Please enter the number corresponding to the shape you would like to calculate the area for:" << endl;
    cout << "1. Circle\n" << "2. Rectangle\n" << "3. Square\n";
    cout << "Enter: " ;
    cin >> choice;
    cout << endl;

// to calculate the area of Circle
    if(choice == 1) {
        double x;
        cout << "Circle:\n";
        cout << "Enter the radius: ";
        cin >> x;
        sh.setRadius(x);
        double rad = sh.getRadius();
        cout << "Area of circle = " << rad * rad * 3.14;
    }

// to calculate the area of Rectangle
    else if(choice == 2) {
        double w, l;
        cout << "Rectangle:\n";
        cout << "Enter the length of rectangle: ";
        cin >> l;
        cout << "Enter the width of rectangle: ";
        cin >> w;
        sh.setLength(l);
        sh.setWidth(w);
        double len = sh.getLength();
        double wid = sh.getWidth();
        cout << "Area of Rectangle = " << wid * len;
    }
    
// to calculate the area of square
    else if(choice == 3) {
        double x;
        cout << "Square:\n";
        cout << "Enter a side of Square: ";
        cin >> x;
        sh.setLength(x);
        double sq = sh.getLength();
        cout << "Area of Square = " << sq * sq;
    }

    else {
        cout << "Wrong option!\nPlease choose the correct one.";
    }

    return 0;
}