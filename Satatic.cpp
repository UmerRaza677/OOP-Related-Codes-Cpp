#include <iostream>
using namespace std;

class A{
    public:
    const static int num1 = 2;
    static int num;
    static inline int num2 = 3;
    A() {
        num2;
        cout << "Called" << endl;
    }

    void static increement(){
        num++;
    }

    int static add() {
        return num + 5;
    }
};

int A::num = 10;

int main() {
    A a1;
    a1.num = 4;
    cout << A::num2 << endl;

    A a;
    cout << a.num1 << endl;

    cout << A::num <<  endl; A::increement();
    cout << a.num <<  endl; A::increement();
    cout << A::num <<  endl; A::increement();
    cout << A::num <<  endl; a.increement();
    cout << A::num <<  endl; A::increement();
    cout << A::add() << endl;
    return 0;
}