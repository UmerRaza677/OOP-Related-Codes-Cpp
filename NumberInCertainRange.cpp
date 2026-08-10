#include <iostream>
using namespace std;

int main() {

    int num;

    do{
        cout << "Choose a number form 0 to 9: ";
        cin >> num;
    }while(!(num >= 0 && num <= 9));

    cout << "You Entered: "  << num << endl;
     
    return 0;
}