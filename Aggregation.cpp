#include<iostream>
using namespace std;

// Independent class
class Teacher {
public:
    string name;

    Teacher(string n) {
        name = n;
    }

    void display() {
        cout << "Teacher Name: " << name << endl;
    }
};

// Aggregation
class Department {
private:
    Teacher* teacher;   // Pointer reference (no ownership)

public:
    Department(Teacher* t) {
        teacher = t;
    }

    void show() {
        cout << "Department Teacher: ";
        teacher->display();
    }
};

int main() {
    Teacher t1("Ali");     // Teacher exists independently

    Department d1(&t1);    // Department uses existing teacher
    d1.show();

    return 0;
}
