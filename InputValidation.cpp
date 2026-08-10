#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    
    while (!(cin >> num)) {
        cout << "Invalid Input! Try Again: " ;
        cin.clear();    //Reset input errors
        cin.ignore(10000, '\n');
    }

    cout << "You Entered: " << num << endl;
    return 0;
}