#include <iostream>
using namespace std;

class Test{
    private:
        int* num;
    public:
        // default constructor
        Test(): num(nullptr) {}  
        
        // Perameterized constructor
        Test(int n) {
            num = new int(n);
        }

        // Deep Copy Constructor
        Test(Test &n){
            num = new int();
            *num = *n.num;
        }

        // Setter for number
        void setNum(int n){
            num = new int(n);
        }

        // display method
        void display() {
            cout << "Number: " << *num << endl;
        }

        ~Test(){
            delete num;
        }
};

int main() {
    Test n;
    n.setNum(5);
    n.display();

    Test n1(10);
    n1.display();

    Test n2(n1);
    n2.display();

    n2.setNum(15);
    n2.display();
    return 0;
}