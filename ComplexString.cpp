/*The program should then create a Complex class, convert it's objects to a string, and output the result to 
the console, use operator oveloading*/
#include <iostream>
#include <cstring>
using namespace std;

class Complex{
    int real, img;

    public:
    //Constructors
    Complex() : real(), img() {}
    Complex(int r, int i) : real(r), img(i) {}

    //Displaying data
    void display_sumComplex();
    //operator overloader, add complex nums
    Complex operator+ (Complex c2);
    //operator over loader, convet complex to string
    Complex operator() ();
};

//operator over loader, convet complex to string
Complex Complex::operator() (){
    string realstr = to_string(real);
    string imgstr = to_string(img);
    int size = sizeof(realstr) + sizeof(imgstr);
    cout << "Complex number: " << realstr << " + " << imgstr << "i" << endl;
    cout << "Size of complex string: " << size + 3  <<endl; //2 for spaces & 1 for '+' & 1 for 'i'
}

//display function to show summ of complex numbers
void Complex::display_sumComplex() {
    cout << "Sum: " << real << " + " << img << "i" <<endl;
}

//operator overloading, add complex nums
Complex Complex::operator+ (Complex c2) {
    Complex c3;
    c3.real = this -> real + c2.real;
    c3.img = this -> img + c2.img;
    return Complex(c3);
}

//methode to call other member functions and creating objects
void call_function() {

    Complex num(10, 20); //10 is real & 20 is img
    num();  //applying operator

    // Complex c1(5, 5), c2(5, 3);
    // Complex c3 = c1 + c2; 
    // c3.display_sumComplex();
}

int main() {
    call_function();
    return 0;
}