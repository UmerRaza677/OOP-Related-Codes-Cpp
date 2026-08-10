#include <iostream>
#include <cmath>
using namespace std;

class Point{
    public:
    int x;
    int y;
    void print_points();
};

void Point::print_points(){
    cout << "(" << x << "," << y << ")" << endl;
}
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
class Shape{
    public:
    int num_points;
    Point *points;

    Shape();
    void set_points(Point *p);
    float get_area();
};

Shape::Shape() {
    cout << "In Shape constructor......." << endl;
    points = NULL;
    num_points = 0;
}

void Shape::set_points(Point *p){
    points = p;
}

float Shape::get_area(){
    return -1.0;
}

//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
class Rectangle:public Shape{
    public:
    Rectangle();
    float get_area();
    void show_shape();
};

Rectangle::Rectangle() {
    cout << "In Rectangle constructor......." << endl;
    num_points = 4;
}

void Rectangle::show_shape() {
    Point *temp;
    temp = points;
    for(int i = 0; i < num_points; i++) {
        temp->print_points();
        temp++;
    }
}

float Rectangle::get_area(){
    int x0, y0, x1, y1, x2, y2, x3, y3;
    Point *R = points;

    x0 = R->x;  y0 = R->y; R++;
    x1 = R->x;  y1 = R->y; R++;
    x2 = R->x;  y2 = R->y; R++;
    x3 = R->x;  y3 = R->y; 

    // Calculate side lengths using distance formula
    float width  = sqrt(pow(x1 - x0, 2) + pow(y1 - y0, 2));
    float height = sqrt(pow(x3 - x0, 2) + pow(y3 - y0, 2));

    // Area = width × height
    float area = width * height;

    return area;
}
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
void create_shape() {
    Rectangle *R = new Rectangle;

    Point P1, P2, P3, P4;
    P1.x = P1.y = 5;
    P2.x = P2.y = 10;
    P3.x = P3.y = 15;
    P4.x = P4.y = 20;

    Point *Points_of_Rectangle;

    Points_of_Rectangle = new Point[4];
    Points_of_Rectangle[0] = P1;
    Points_of_Rectangle[1] = P2;
    Points_of_Rectangle[2] = P3;
    Points_of_Rectangle[3] = P4;

    R->set_points(Points_of_Rectangle);
    R->show_shape();

    cout << "Area of Rectangle: " << R->get_area() << endl;

}

//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
int main() {
    create_shape();
    return 0;
}