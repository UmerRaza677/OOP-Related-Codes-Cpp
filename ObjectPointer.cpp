#include <iostream>
using namespace std;

class Student{
    public:
        int ID;
        string name;
        string departmaent;
        string subjectCode;
        string courseTitle;
        float gpa;

    //Constructor
    Student(int ID, string name, float gpa){

        this->ID = ID;          //for smae variable names on B.S we us 'this' Keyword
        this-> name = name;
        this->gpa = gpa;
    }
};

  //Function to print data.
    void print(Student s){
        cout <<"Name: " <<s.name <<endl <<"ID: " <<s.ID <<endl  <<"Gpa: " <<s.gpa <<endl;
        cout<<endl;
    }

    //Change the value of s1
    void change(Student *s1){
        (*s1).gpa = 3.99;    //both methods can be used
        s1->ID = 80;        //both methods can be used
    }

int main(){
    //Sending data to Constructor
    Student s1(168, "Umer Raza", 2.30);
    Student s2(182, "Ubaidullah Aslam", 3.30);

    //Addres of s2, Storing in a vector 
    //We can also change the data of s2 through pointer
    Student *p1 = &s2;
    p1->name = "Toseef Raza";
    p1->gpa = 2.67;

    //Another method of applying pointer which is called "Dynamic Allocation".
    Student *s3 = new Student(677, "Raza Ahmed", 3.50);
    /*In upper case a datatype is created and store data, but it has no name,
    & it's addres is directly stored in pointer which  name is "*s3". This is called Dynamic ALo\location.
    The memory in which data is stored is called heap memory.
    */
    print(s2);
    //Changing the values of s1 through function
    change(&s1);
    print(s1);
    print(*s3);

    return 0;
}