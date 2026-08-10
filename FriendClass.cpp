#include <iostream>
using namespace std;

class A{
    private:
        int A_val;
    public:
        A(int a) : A_val(a) {}

    friend class B;
};

class B{
    private:
        int B_val;
    public:
        B(int b) : B_val(b) {}

        int Add(A& Val){
            return Val.A_val + B_val;
        }
};

int main(){
    A a(10);
    B b(20);

    cout << "Sum: " << b.Add(a) << endl;
    return 0;
}