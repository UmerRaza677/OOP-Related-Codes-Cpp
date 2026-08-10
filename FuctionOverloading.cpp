/*Write a C++ program that asks a user to perform one of the 8 options, addition for integers, addition for 
the doubles, subtraction for integers, subtraction for doubles, addition of integer and double, subtraction 
of integer and double and it’s vice versa.*/
#include <iostream>
using namespace std;

    void addition(int a, int b) {
        cout << "Addition of two int: " << a + b;
    }

    void addition(double a, double b){
        cout << "Addition of two double: " << a + b;
    }

    void addition(int a, double b) {
        cout << "Addition of int & double: " << a + b;
    }

    void addition(double a, int b) {
        cout << "Addition of double & int: " << a + b;
    }

    void subtraction(int a, int b) {
        cout << "Subtraction of two int: " << a - b;
    }

    void subtraction(double a, double b) {
        cout << "Subtraction of two double: " << a - b;
    }

    void subtraction(int a, double b) {
        cout << "Subtraction of int & double: " << a - b;
    }

    void subtraction(double a, int b) {
        cout << "Subtraction of double & int: " << a - b;
    }


int main() {
    int i = 1;
    while(i != -1){
        
        cout << "Itration: " << i << endl;
        int choice;
        cout << "\nChoose an operation:" << endl;
        cout << "1. Add Integers" << endl;
        cout << "2. Add Doubles" << endl;
        cout << "3. Subtract Integers" << endl;
        cout << "4. Subtract Doubles" << endl;
        cout << "5. Add Integer and Double" << endl;
        cout << "6. Subtract Integer and Double" << endl;
        cout << "7. Add Double and Integer" << endl;
        cout << "8. Subtract Double and Integer" <<endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout << endl;

        if (choice == 0) {
            cout << "Exiting program." << endl;
            break;
        }

        if (choice < 1 || choice > 8) {
            cout << "Invalid choice. Please enter a number between 1 and 8, or 0 to exit." << endl;
            continue;
        }

        //Getting data from user
        double x, y;
        cout << "Enter 1st number: " ;
        cin >> x;
        cout << "Enter 2nd number: " ;
        cin >> y;
        //Converting dataTypes double to in
        int a = int(x);
        int b = int(y);

        //Selecting specific operation function by choice
        if (choice == 1) addition(a, b);
        if (choice == 2) addition(x, y);
        if (choice == 3) subtraction(a, b);
        if (choice == 4) subtraction(x, y);
        if (choice == 5) addition(a, y);
        if (choice == 6) subtraction(a, y);
        if (choice == 7) addition(x, b);
        if (choice == 8) subtraction(x, b);

        i++;
        cout << endl;
        cout << endl << "///////////////////////////////////////////" << endl; 
    }
}