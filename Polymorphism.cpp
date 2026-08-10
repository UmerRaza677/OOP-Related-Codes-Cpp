//A simple program to under stand the concept of polymorphism.
#include <iostream>
#include <string>
using namespace std;

//A parent class, which is abstract or pure-virtual
class Person{
    public:
        //a pureVirtual or abstract function which do nothing
        virtual void treval() = 0;
};

//Subclass
class Teacher : public Person{
    public:
        void treval() {
            cout << "Teacher treval through his own car." << endl;
        }
};

//Subclass
class Student : public Person {
    public:
        void treval () {
            cout << "Student treval through local transport." << endl;
        }
};

// with the help of this function we give the address of subclasses to the refrence
// variable in main function.
// it's return type is parent class Person (we can call the members of child classes
// through parent class pointer)
Person* select_person() {
    string person = "Student";

    Person *p;
    if(person == "Teacher")
        p = new Teacher;
    else
        p = new Student;

    return p;
}

int main( ) {
    //Remember we can't declare an object of abstract or pure-virtual class
    //following is refrence variable, which is used to store the address of Person class & it's derived classes
    Person *p;

    p = select_person(); 
    //through this one function we can call multiple functions of diffirent derived classes
    //it is the defination of polymorphism (one thing has many forms)
    p->treval();
    return 0;
}