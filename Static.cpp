#include <iostream>
using namespace std;

class Student{
    int id;
    static int next_id;     //static variable

    public:
    static int next_student_id(){       //static function to assign value to static variable
        next_id++;
        return next_id;
    }

    Student(){
        id = Student::next_student_id();
    }

    int get_id() {
        return id;
    }
};
int Student::next_id = 0;       //initialize the static variable here..... 

//Using static in a function
int callFunc(){
    static int count = 0;
    return count++;
}

int main() {
    Student s1, s2, s3, s4;

    cout << Student::next_student_id() << endl;
    
    cout << "ID of 1st Student: " << s1.get_id() << endl;
    cout << "ID of 2nd Student: " << s2.get_id() << endl;
    cout << "ID of 3rd Student: " << s3.get_id() << endl;
    cout << "ID of 4th Student: " << s4.get_id() << endl;

    int i = 0;
    while (i < 3){
        cout << "Call function " << callFunc() << " time" << endl; i++;   }

    return 0;
}