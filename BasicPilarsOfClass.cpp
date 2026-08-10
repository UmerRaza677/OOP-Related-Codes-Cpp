#include <iostream>
#include <cstring>
using namespace std;

class Person {
private:
    char *name;
    int age;
    float height;
public:
    // Constructor 
    Person(int a, float h) {
        cout << "Simple cnstructor called!" << endl;
        name = new char[30];
        age = a;
        height = h;
    }
    
    //copy copy constructr
    Person(Person& temp) {
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name); //copy content of temp.name to ch
        this->name = ch;

        cout << "Copy cnstructor called!" << endl;
        this->age = temp.age;
        this->height = temp.height;
    }

    void setData(char*, int, float);
    void printData();
};

inline void Person::setData(char* n, int a, float h){
    name = new char[30];
    age = a;
    height = h;
}

void Person::printData() {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Height: " << height << endl;
}

int main() {

Person p1(30, 5.5);
p1.setData("Babber", 30, 5.5);
p1.printData();

Person p2(p1); // Copy constructor is called here    
p2.setData("Gabbar", 25, 6.0);
p2.printData();

p1.printData(); // To verify p1 data remains unchanged
return 0;
}