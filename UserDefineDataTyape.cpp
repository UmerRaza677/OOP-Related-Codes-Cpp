#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;
    float hieght; 
    string ph_no;
    string hobby;

};

void print(Person p){ //functin to print the outputs
    cout << "Name: " << p.name << endl;
    cout << "Age: " << p.age << endl;
    cout << "Hieght: " << p.hieght << endl;
    cout << "Ph No: " << p.ph_no << endl;
    cout << "Hobby: " << p.hobby << endl;
    cout<<endl;
}

void change(Person& ph){
    ph.ph_no = "0314-8759029";
}

int main() {

    Person p1; //object 1
    p1.name = "Umer Raza";
    p1.age = 21;
    p1.hieght = 5.8;
    p1.ph_no = "0347-0997288";
    p1.hobby;
    cout << "Enter your hobby " <<p1.name <<" :";
    cin>>p1.hobby;

    Person p2; // object 2
    p2.name = "Faisal Warraich";
    p2.age = 43;
    p2.hieght = 5.6;
    p2.ph_no = "0317-*******";
    p2.hobby;
    cout << "Enter your hobby " <<p2.name <<" :";
    cin>>p2.hobby;

    Person p3; //object 3
    p3.name = "Kurram Ellahi";
    p3.age = 35;
    p3.hieght = 5.5;
    p3.ph_no = "0347-*******";
    p3.hobby;
    cout << "Enter your hobby " <<p3.name <<" :";
    cin>>p3.hobby;
    cout<<endl;

    print(p1);
    print(p2);
    print(p3);

    change(p2); //change by the value
    change(p3); //change by the Refrence

    cout<<"After changing the phone num by Refrence." << endl << endl;

    print(p1);
    print(p2);
    print(p3);

}