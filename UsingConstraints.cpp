#include <iostream>
using namespace std;

class Student{
    protected:
    float cgpa;

    public:
    void set_cgpa(float cgpa);
    float get_cgpa();
};

void Student::set_cgpa(float cgpa){
    if(cgpa >=0.0 && cgpa <= 4.0){
        this-> cgpa = cgpa;
    }
    else{
        cout << "Incorrect cgpa, Enter again........" << endl;
    }
}

float Student::get_cgpa(){
    return cgpa;
}
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
class PHDStudent:public Student{ //imaigne scenario
    public:
    void set_cgpa(float cgpa); //Function Overriding
    float get_cgpa();
};

void PHDStudent::set_cgpa(float cgpa){
    if(cgpa >=0.0 && cgpa <= 8.0){
        this-> cgpa = cgpa;
    }
    else{
        cout << "Incorrect cgpa, Enter again........" << endl;
    }
}

float PHDStudent::get_cgpa(){
    return cgpa;
}
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
void Enter_cgpa_of_Student( ) {
    Student s1;

    cout << "Parent Class:-" << endl;
    s1.set_cgpa(-1.3);
    cout << "Your cgpa: " << s1.get_cgpa() << endl;
    s1.set_cgpa(2.6);
    cout << "Your cgpa: " << s1.get_cgpa() << endl;
    s1.set_cgpa(4.7);
    cout << "Your cgpa: " << s1.get_cgpa() << endl;
    s1.set_cgpa(3.8);
    cout << "Your cgpa: " << s1.get_cgpa() << endl;
    cout << endl;
}
//////////////////////////////////////////////////////////////////////
void Enter_cgpa_of_PHDStudent( ) {
    Student s1;

    cout << "Child Class:-" << endl;
    s1.set_cgpa(-1.3);
    cout << "Your cgpa: " << s1.get_cgpa() << endl;
    s1.set_cgpa(2.6);
    cout << "Your cgpa: " << s1.get_cgpa() << endl;
    s1.set_cgpa(5.9);
    cout << "Your cgpa: " << s1.get_cgpa() << endl;
    s1.set_cgpa(8.3);
    cout << "Your cgpa: " << s1.get_cgpa() << endl;
}
int main () {
    Enter_cgpa_of_Student( ); 
    Enter_cgpa_of_PHDStudent( ); 
    return 0;
}