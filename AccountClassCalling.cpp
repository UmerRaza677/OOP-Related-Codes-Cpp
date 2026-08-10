// Define a class to represent a bank account
#include <iostream>
#include <string>
#include "AccountClass.cpp" //including Account class from another file
using namespace std;

int main() {
    Account acc1, acc2;

    acc1.Show_Data();
    cout << "\n";
    acc1.initVals("Umer Raza", 68, "Current", 2000);
    acc1.deposite_Amount(500);
    acc1.withdraw_Amount(1000);
    cout << "\n";
    acc1.Show_Data();

    return 0;
}