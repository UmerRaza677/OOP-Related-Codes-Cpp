#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Student{
    public:
    string name;
    int rollNo;
    int age;

    //default constructor
    Student() : name(), rollNo(), age() {}
    //perameterized constructor
    Student(string n, int r, int a) : name(n), rollNo(r), age(a) {}

    //copy Constructor 
    Student(const Student &temp){
        this->name = temp.name;
        this->rollNo = temp.rollNo;
        this->age = temp.age;
    }
};

//display method
    void printStudents(vector<Student> &stds) {
        for(Student i: stds){
            cout << "Name: " << i.name << " Roll No: " << i.rollNo << " Age: " << i.age << endl;
        }
    }

int main() {

    vector<Student> stds = {{"Raza", 67711, 18},
                            {"Umer", 22649, 19},
                            {"Raza", 67562, 20}};

    printStudents(stds);
    cout << "\nCopy constructor:- \n";
    vector<Student> copiedStds = stds;
    copiedStds[2].name = "Sajed";
    copiedStds[2].rollNo = 80;

    printStudents(copiedStds);
}