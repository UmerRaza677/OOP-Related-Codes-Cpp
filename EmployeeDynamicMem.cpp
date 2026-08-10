#include <iostream>
#include <cstring>
using namespace std;

class Employee{
    char* name;
    int* ID;
    double* salary;

    public:
        Employee(); //Default Constructor
        Employee(const char* nm, int id, double sal); // Perameterized constructor
        Employee(const Employee& other); //deep copy constructor

        void Display(); //Display method
        ~Employee(); //Detructor

    //SETTERS
    void setName(const char* nm){
        delete []name;
        name = new char(strlen(nm)+1);
        strcpy(name, nm);
    }

    void setId(int id){
        ID = new int(id);
    }

    void setSalary(double sal){
        salary = new double(sal);
    }

    //GETTERS
    char* getName() const{
        return name;
    }

    int getId() const{
        return *ID;
    }

    double getSalary() const{
        return *salary;
    }
};
//--------------------------------------------------------------------------------------
//Default Constructor
Employee::Employee() {
    name = nullptr;
    ID = new int(0);
    salary = new double(0.0);}

// Perameterized constructor
Employee::Employee(const char* nm, int id, double sal){
    if(nm != nullptr) {
        name = new char[strlen(nm) + 1];
        strcpy(name, nm);
    } else name = nullptr;

    ID = new int(id);
    salary = new double(sal);
}

//deep copy constructor
Employee::Employee(const Employee& other){
    if(other.name != nullptr) {
        name = new char[strlen(other.name) + 1];
        strcpy(name, other.name);
    } else name = nullptr;

    ID = new int(*other.ID);
    salary = new double(*other.salary);
}

//Display method
void Employee::Display(){
    cout << "Name: " << name << endl;
    cout << "ID: " << *ID << endl;
    cout << "Salary: " << *salary << endl;
}

//Detructor
Employee::~Employee(){
    delete [] name;
    delete ID;
    delete salary;
}
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

void checkEmploye(){
    Employee emp1("Umer Raza", 68, 70000);
    emp1.Display();

    Employee emp2 = emp1;
    emp2.setName("Taskeen Sajad");
    emp2.setId(80);
    emp2.setSalary(800000);
    emp2.Display();
    
}

int main(){
    checkEmploye();
    return 0;
}