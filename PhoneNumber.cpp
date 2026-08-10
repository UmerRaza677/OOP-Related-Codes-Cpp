/*
  This C++ program defines a 'Phone' class to store and display phone numbers.
  The class has private data members 'areaCode', 'exchange', and 'number' to represent the phone number components.

  - The default constructor is provided to initialize the phone number components to 0.

  - The 'Input' function allows the user to input the area code, exchange, and number.

  - The 'Display' function displays the phone number in the format (areaCode) exchange-number.

  Note: The program demonstrates the use of a class to represent phone numbers and the member functions to interact with class data.
  The 'Phone' class encapsulates the phone number details and provides methods to input and display phone numbers.
*/
#include <iostream>
#include <string>
using namespace std;

class Phone {
private:
    // int areaCode;
    // int exchange;
    // int number;
    char* phno;

public:
    // Phone() : areaCode(0), exchange(0), number(0) {}
    Phone() {
        phno = nullptr;
    }

    void Input(int &size) {
        phno = new char[size];
        cout << "Enter your phone number: ";
        cin.ignore();
        cin.getline(phno, size);
        
    }

    void Display() {
        cout << "My number is: " << phno << endl;
    }
};

int main() {
    int length;
    cout << "Enter the number of charcters in your Ph No: " ;
    cin >> length;

    Phone yourNumber;

    yourNumber.Input(length);
    yourNumber.Display();

    return 0;
}