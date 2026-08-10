#include <iostream>
#include <cstring>
using namespace std;

class Student{
    private:
        char* name;
        int age;

    public:
        // Contructor
        Student(const char* n, int a) {
            age = a;
            name = new char[strlen(n) + 1];
            strcpy(name, n);
        }

        // DeepCopy Constructor
        Student(const Student& other){
            age = other.age;
            name = new char[strlen(other.name) + 1];
            strcpy(name, other.name);
        }

        // Destructor
        ~Student() {
            delete[] name;
        }

        // Display Function
        void Display() {
            cout << "Name: " << name << endl
                << "Age: " << age << endl;
        }

        // Setter Functon for name
        void setName(const char* n){
            delete [] name;
            name = new char[strlen(n) + 1];
            strcpy(name, n);
        }

        // Age Setter
        void setAge(int age){
            this->age = age;
        }

};

int main() {
    Student s1("Raza", 20);
    s1.Display();

    Student s2 = s1;

    s2.setName("Raza");
    s2.Display();

    return 0;
}