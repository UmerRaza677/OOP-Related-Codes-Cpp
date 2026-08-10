// Complete the missing code where a base template class holds generic values, and a 
// specialized derived class provides additional functionality for integers.
#include<iostream>
using namespace std;

template <typename T>
class Base{
    protected:
        T value;

    public:
        Base(T val) : value(val) {}     // Constructor
        T getValue() const{
            // Missing Code
        }

        virtual void display() const {
            cout << "Base value: " << value << endl;
        }
};

class Derived : public Base <int> {
    public:
        Derived(int val) : Base <int> (val) {}
        void display() const override{
            cout << "Derived value: " << value << endl;
        }
};

int main() {
    Base <double>  obj1(5.5);
    obj1.display();

    Derived obj2(4);
    obj2.display();
    return 0;
}