#include <iostream>
using namespace std;

class A;
class B;

class A{
    int numA;
    friend int product(A nA, B nB);

    public:
    A() : numA(5) {} //constructor
};

class B{
    int numB;
    friend int product(A nA, B nB);

    public:
    B() : numB(5) {} //constructor
};

int product(A nA, B nB){
    return nA.numA * nB.numB;
}

int main() {
    A n1;
    B n2;
    cout << "Product: " << product(n1, n2);
}