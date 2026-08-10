/*Access Modifiers are used to control the access of data in structurs from user.
there three types of access modifiers:
                                    Accessebility
                outside class   |  within class  |   Derived Class or Child Class
1. Public    ->     we can      |   we can       |          we can
2. private   ->     cannot      |   we can       |          we can
3. Protected ->     cannot      |   we can       |          cannot
*/
#include <iostream>
using namespace std;

class Student{
    public:
    int RollNo;
    string name;

    Student(string n,int r,float gpa){
        RollNo = r;
        name = n;
        this->gpa = gpa;
    }

    void getData(){
        cout<<name <<endl <<RollNo <<endl <<gpa <<endl;
        cout<<endl;
    }
    void changeGpa(){
        gpa = 3.9;
    }

    private:
    float gpa;
};

int main(){
    Student s1("Umer Raza", 168, 3.8);// We can't change the gpa cause of Private Access Modifier
                                        //But we have another way to change it by using setter
    s1.getData();
    s1.changeGpa();
    s1.getData();



    return 0;
}