#include <iostream>
using namespace std;

struct Student{
    //data members
    string name;
    int rollNo;
    float cgpa;

    //methods
        void status(){
            cout << "Single\n" << endl;
        }

        void display(){
            cout << "Name: " << name << endl
                << "Roll No: " << rollNo << endl
                << "CGPA: "  << cgpa << endl;
        }
}s1;

int main() {

    s1.name = "Umer Raza";
    s1.rollNo = 68;
    s1.cgpa = 2.57;


    s1.display();

    s1.status();
    

    return 0;
}