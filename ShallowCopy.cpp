#include <iostream>
using namespace std;

class Test{
    private:
        int num;
    public:
        // default constructor
        Test(): num(0) {}  
        
        // Perameterized constructor
        Test(const int& n) {
            num = n;
        }

        // Deep Copy Constructor
        Test(const Test &n){
            num = n.num;
        }

        // Setter for number
        void setNum(const int& n){
            num = n;
        }

        // display method
        void display() {
            cout << "Number: " << num << endl;
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

    n1.display();
    return 0;
}