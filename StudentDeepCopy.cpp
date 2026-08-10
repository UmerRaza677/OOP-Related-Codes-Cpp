/*We will create a class of Student, in which we will use of copy contructor, we will create an insatce of Student s1 &
then s2, the contents of s1 will be copied into s2.
we have to check that when we modify s2, but s1 is changes also that is why we will use the concept of deep copy.
Unlike python Cpp cannot create deep copy, we have toi mannually apply it.*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Student{
    public:
        string name;
        int rollNo;
        int age;

        Student() : name(""), rollNo(0), age(0) {} // Default constructor
        Student(string n, int rN, int a); // perameterized constructor
        Student(const Student& other); // Copy Constructor
        ~Student() {} // Destructor
};

// perameterized constructor
Student::Student(string n, int rN, int a){
    name = n;
    rollNo = rN;
    age = a;
}

// Copy Constructor
Student::Student(const Student& other){
    this -> name = other.name;
    this -> rollNo = other.rollNo;
    this -> age = other.age;
}

//Display method
void Display(vector<Student>& std){
    for(const Student s: std)
        cout << "Name: " << s.name << "\nRoll no: " << s.rollNo << "\nAge: " << s.age << endl;
}
// XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
void exeStudent(){
    vector<Student> s1 = {
        {"Umer Raza", 68, 20},
        {"Haseeb Hassan", 80, 20},
        {"Zohaib Ur Rehman", 90, 20}
    };

    vector<Student> s2 = s1;
    s2[0].age = 21; //Modifyng the instance

    Display(s1);
    cout << "--------------------------" << endl;
    Display(s2);
}
int main(){
exeStudent();
}