#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() = 0;
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks" << endl;
    }
};

int main() {
    Animal* ptr;
    Dog d;
    ptr->sound();
    ptr = &d;
    ptr->sound();   // Dog barks (runtime decision)

    return 0;
}
