#include <string>
using namespace std;

class Account{
    string name;
    int accNum;
    string accType;
    float currentAmount;

    public:
    //Function to initiolize vals 
        void initVals(string, int, string, float);
        // Function to deposit amount
        void deposite_Amount(float);
        // Function to widthraw amount
        void withdraw_Amount(float);
        // Function to display data
        void Show_Data();
};

//Function to initiolize vals 
void Account::initVals(string n, int num, string type, float crntAmnt){
    name = n;
    accNum = num;
    accType = type;
    currentAmount = crntAmnt;
}
// Function to deposit amount
void Account::deposite_Amount(float depAmount){
    cout << "Your balance: Rs." << currentAmount << endl;
    cout << "Enter deposite amount: Rs." << depAmount << endl;
    if(depAmount > 0) currentAmount += depAmount;
}
// Function to widthraw amount
void Account::withdraw_Amount(float widthAmount){
    cout << "Your balance: Rs." << currentAmount << endl;
    cout << "Enter withdraw amount: Rs." << widthAmount << endl;
    if(widthAmount <= currentAmount) currentAmount -= widthAmount;
}
// Function to display data
void Account::Show_Data(){
    cout << "Name: " << name << endl;
    cout << "Account number: " << accNum << endl;
    cout << "Account Type: " << accType << endl;
    cout << "Total balance: Rs." << currentAmount << endl;
}