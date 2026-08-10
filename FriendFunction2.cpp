#include <iostream>
using namespace std;

class Student{
    private:
        string name;
        int RollNo;
        float cgpa;
    
        friend void FUN1();
    public:
        Student(string n, int rn, float cgpa) : name(n), RollNo(rn), cgpa(cgpa) {}

        friend void FUN2();

        void display (){
            cout << "Name: " << name << endl
                << "Roll No: " << RollNo << endl
                << "CGPA: " << cgpa << endl;
            }
};

void FUN1(){
    Student std("Umer", 68, 2.57);
    std.RollNo = 80;
    std.display();
}

void FUN2(){
    Student std("Raza", 68, 2.57);
    std.RollNo = 80;
    std.cgpa = 2.68;
    std.display();
}

int main() {
    FUN1();
    cout << "-------------" << endl;
    FUN2();
    return 0;
}