/*In this implementation, the Complex class has two data members, real and imaginary, which are initialized 
through the constructor. The getReal and getImaginary member functions return the values of the real and 
imaginary data members, respectively. The show member function prints the complex number in the format 
real + imaginary i.
The class also has four overloaded operators for addition, subtraction, multiplication, and division of two 
Complex objects. These operators take another Complex object as a parameter and return a new Complex object 
with the appropriate result.*/

#include <iostream>
#include <string>
using namespace std;

class Complex{
    double real;
    double img;

    public:
        Complex() : real(0), img(0) {}
        Complex(double r, double i) : real(r), img(i) {}

        void display()const;
        void setreal(double r);
        void setimg(double i);
        double getreal()const;
        double getimg()const;

        Complex operator + (const Complex &other)const;
        Complex operator - (const Complex &other)const;
        Complex operator * (const Complex &other)const;
        Complex operator / (const Complex &other)const;

        ~Complex() {}
};

//--------------------------------------------------------------
//SETTERS
void Complex::setreal(double r){real = r;}
void Complex::setimg(double i){img = i;}

//GETTERS
double Complex::getreal() const{return real;}
double Complex::getimg() const{return img;}

//Display Function
void Complex::display() const{cout << real << " + " << img << "i" << endl;}

//Operator Overloaders
//+ operator
Complex Complex::operator + (const Complex& other) const{
    double realSum = real + other.real;
    double imgSum = img + other.img;
    return Complex(realSum, imgSum);
}

//- operator
Complex Complex::operator - (const Complex& other) const{
    double realSum = real - other.real;
    double imgSum = img - other.img;
    return Complex(realSum, imgSum);
}

//* operator
Complex Complex::operator * (const Complex& other) const{
    double realSum = real * other.real;
    double imgSum = img * other.img;
    return Complex(realSum, imgSum);
}

/// operator
Complex Complex::operator / (const Complex& other) const{
    double realSum = real / other.real;
    double imgSum = img / other.img;
    return Complex(realSum, imgSum);
}
// XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

void operateComplex() {
    Complex c1, c2;
    c1.setreal(5);
    c1.setimg(10);
    c2.setreal(10);
    c2.setimg(5);

    cout << "c1: "; c1.display();
    cout << "c2: "; c2.display();

    Complex c3 = c1 + c2; cout << "c1 + c2: "; c3.display();
    Complex c4 = c1 - c2; cout << "c1 - c2: "; c4.display();
    Complex c5 = c1 * c2; cout << "c1 * c2: "; c5.display();
    Complex c6 = c1 / c2; cout << "c1 / c2: "; c6.display();
}

int main() {
    operateComplex();
    return 0;
}