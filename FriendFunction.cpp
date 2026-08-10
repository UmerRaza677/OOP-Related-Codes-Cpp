#include <iostream>
using namespace std;

class Student{
    float cgpa;
    friend void access_private_data_directly(Student s1);
    public:
    // friend void access_private_data_directly(Student s1);
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
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
void access_private_data_directly(Student s1){
    s1.cgpa = 5.8;
    cout << "Cgpa: " << s1.cgpa << endl;
}

int main() {
    Student s1;
    access_private_data_directly(s1);
    return 0;
}