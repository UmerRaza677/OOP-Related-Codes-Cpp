// Write a class IntegerCalculator that performs the all operations over integer data.
// Make sure to use the concept of inline functions.
#include <iostream>
#include <cmath>
using namespace std;

//Class
class Calculator{
    private:
        int num1, num2;
    public:
        //Define will outside the class
        void Input(int num);
        void Output(int num);
        //Define will inside the class & these are defaultly inline
        int Add(){
            return num1 + num2;
        }

        int Subtract(){
            return num1 - num2;
        }

        int Multiply(){
            return num1 * num2;
        }

        int Divide(){
            if(num2 == 0)
                cout << "Denominator must be greater then zero!" << endl;
            else
            return num1 / num2;
        }

        int Module(){
            return num1 % num2;
        }

        int SquareRoot(){
            return sqrt(num1);
        }

};

//Calling input function
inline void Calculator::Input(int num) {
    if(num == 6){
        cout << "Enter a number: ";
        cin >> num1;
    }
    else if(num == 1 || num == 2 || num == 3 || num == 4 || num == 5){
        cout << "Enter 1st number: ";
        cin >> num1;
        cout << "Enter 2nd number: ";
        cin >> num2;
    }

    else{ }
}

//Calling output function
inline void Calculator::Output(int num) {

    if(num == 1)
        cout << "Result: " << Add();
    else if(num == 2)
        cout << "Result: " << Subtract();
    else if(num == 3)
        cout << "Result: " << Multiply();
    else if(num == 4)
        cout << "Result: " << Divide();
    else if(num == 5)
        cout << "Result: " << Module();
    else if(num == 6)
        cout << "Result: " << SquareRoot();
    else if(num == 0)
        cout << "Program Terminated!";
    else
        cout << "Please choose the correct option.";
}

int main() {
    int num;
    cout << "Enter crosspondes number, which task you want to perform: " << endl;
    cout << "1. Addition" << endl << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl << "4. Division" << endl;
    cout << "5. Modulas" << endl << "6. Square Root" << endl;
    cout << "0. Terminate Program" << endl;
    cout << "Enter your choice: ";
    cin >> num;
    cout << endl;

    Calculator cal;

    cal.Input(num);
    cal.Output(num);
    return 0;
}