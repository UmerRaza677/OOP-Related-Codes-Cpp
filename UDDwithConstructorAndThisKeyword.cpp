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
    Student(int ID, string name, string dep, string subject, string course, float gpa){

        this->ID = ID;          //for smae variable names on B.S we us 'this' Keyword
        this-> name = name;
        departmaent = dep;
        subjectCode = subject;
        courseTitle = course;
        this->gpa = gpa;
    }

    //Function in User Define Datatype
    void print(){
        cout <<"Name: " <<this->name <<endl <<"ID: " <<this->ID <<endl <<"Department: " <<this->departmaent <<endl;
        cout<<"Course Code: " <<this->subjectCode <<endl <<"Course Title: " <<this->courseTitle <<endl <<"Gpa: " <<this->gpa <<endl;
        cout<<endl;
    }
};

int main(){
    //Sending data to Constructor
    Student s1(168, "Umer Raza", "BS IT","OOP112", "Object Oriented Programming", 2.30);
    Student s2(182, "Ubaidullah Aslam", "BS IT","OOP112", "Object Oriented Programming", 3.30);

    //copying data
    Student s3 = s1;     //s3(s1);  //We copy the content of s1 to  s3
    s3.name = "Zain Ali";   //Beacuse it is a deep copy we can change the data also
    s3.ID = 155;
    s3.gpa = 2.80;

    s1.print();
    s2.print();
    s3.print();
   /* //Output of Student 1
    cout<<"1st Student:" <<endl;
    cout <<"Name: " <<s1.name <<endl <<"ID: " <<s1.ID <<endl <<"Department: " <<s1.departmaent <<endl;
    cout<<"Course Code: " <<s1.subjectCode <<endl <<"Course Title: " <<s1.courseTitle <<endl <<"Gpa: " <<s1.gpa <<endl;

    //Output of Student 2
    cout<<endl <<"2nd Student:" <<endl;
    cout <<"Name: " <<s2.name <<endl <<"ID: " <<s2.ID <<endl <<"Department: " <<s2.departmaent <<endl;
    cout<<"Course Code: " <<s2.subjectCode <<endl <<"Course Title: " <<s2.courseTitle <<endl <<"Gpa: " <<s2.gpa <<endl;
    
    //Output of Student 3
    cout<<endl <<"3rd Student:" <<endl;
    cout <<"Name: " <<s3.name <<endl <<"ID: " <<s3.ID <<endl <<"Department: " <<s3.departmaent <<endl;
    cout<<"Course Code: " <<s3.subjectCode <<endl <<"Course Title: " <<s3.courseTitle <<endl <<"Gpa: " <<s3.gpa <<endl;
    */
    return 0;
}