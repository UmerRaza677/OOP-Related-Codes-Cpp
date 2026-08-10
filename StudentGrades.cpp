//print student grades according to it's marks
//get his name, class, marks, rollNo

#include <iostream>
#include <string>
using namespace std;

class Student {
    string name;
    int rollNo;
    float marks;

    public:
        //default contructor
        Student() : name(""), rollNo(0), marks(0.0) {}
        Student(string n, int rN, float m);

        void inputStudent();
        void showStudent();
        char calGrade();
};

//perameterized constructor to assign vals
Student::Student(string n, int rN, float m){
    name = n;
    rollNo = rN;
    marks = m;
}

//getting data of Student from user
void Student::inputStudent(){
    cout << "Enter name: ";
    getline(cin, name);
    cout << "Enter Roll No: ";
    cin >> rollNo;
    cout << "Enter marks: ";
    cin >> marks;
}

//Methode to determine grade according to marks
char Student::calGrade(){
    if(marks > 100.0 || marks < 0.0) return '0';

    if(marks >= 85) return 'A';
    else if(marks >= 70) return 'B';
    else if(marks >= 60) return 'C';
    else if(marks >= 50) return 'D';
    else return 'F';
}

//Methode to display data of student
void Student::showStudent(){
    cout << "Name: " << name << endl;
    cout << "Roll number: " << rollNo << endl;
    cout << "Marks: " << marks << endl;
    cout << "Grade: " << calGrade() << endl;
}
// XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

void checkStudent(){
    Student s;
    s.inputStudent();
    cout << endl << "-------------------------------------------" << endl;
    s.showStudent();
}

int main() {
    checkStudent();
    return 0;
}