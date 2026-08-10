/*Write a C++ program to implement a class called Employee that has private
member variables for name, employee ID, and salary. Include member functions
to calculate and set salary based on employee performance. */
#include <iostream>
#include <string>
using namespace std;

class Employee{
    string name;
    int empID;
    float salary;

    public:
        void setSalary();
        float calSalary(float pr);
};

//Getting employee details
void Employee::setSalary(){
    cout << "Enter salary: ";
    cin >> salary;
}

float Employee::calSalary(float pr){
    if(pr > 0.0 && pr < 3.0) return salary * pr;
    return 0;
}
// XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

void checkEmployee(){
    Employee emp;
    emp.setSalary();

    float pr;
    cout << "Enter your perfomance rate: ";
    cin >> pr;

    if(emp.calSalary(pr))
        cout << "Total salary: Rs." << emp.calSalary(pr);
    else 
        cout << "Perfomance rate is (4.0 < 0.0)." << endl;
}

int main(){
    checkEmployee();
    return 0;
}