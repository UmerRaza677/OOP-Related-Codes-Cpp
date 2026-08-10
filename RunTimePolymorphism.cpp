#include <iostream>
using namespace std;

class Animal {
public:
    // Virtual function
    virtual void sound() {
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    // Overriding base class function
    void sound() override {
        cout << "Dog barks" << endl;
    }
};

int main() {
    Animal ptr;     // Base class pointer
    Dog obj;

    // ptr = &obj;

    ptr.sound();    // Calls Dog's sound() due to virtual function

    return 0;
}
