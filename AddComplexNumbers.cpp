//Add two Complex numbers, using class. Also use friend function to access private values
#include <iostream>
using namespace std;

class Complex{
    int real;
    int img;

    public:
        Complex() : real(), img() {} //Default constructor
        Complex(int r, int i) : real(r), img(i) {} //Contructor to assign vals
        friend Complex Add(Complex r, Complex i); // Firend Function declaration
        void Input(); // Function declaration to get input
        void print_nums(); //Function declaration to print output
};
//Getting values from user
void Complex::Input() {
    static int i = 1;
    cout << "Enter " << i << " complex number: " << endl;
    cout << "Enter real part: " ;
    cin >> real;
    cout << "Enter imaignery part: " ;
    cin >> img;
    i++;
    cout << endl;
}
//Function to print numbers
void Complex::print_nums(){
    cout << real << " + " << img << "i" << endl;
}

//Function to add two complex numbers
Complex Add(Complex c1, Complex c2){
    Complex sum;

    sum.real = c1.real + c2.real;
    sum.img = c1.img + c2.img;

    return sum;
}

int main(){
    Complex c1, c2, c3;
//Calling Functions
    c1.Input();
    c2.Input();
    c3 = Add(c1, c2);
    c1.print_nums();
    c2.print_nums();
    cout << "---------" << endl;
    c3.print_nums();
    return 0;
}