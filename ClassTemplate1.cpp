#include <iostream>
using namespace std;

template <typename T>
class Box{
    private:
        T box;
    public:
        Box(T box) : box(box) {}
    
        void display() {
            cout << box << endl;
        }
};

int main() {

    Box<int> b(5);
    b.display();

    Box<string> b1("Mistry Box");
    b1.display();

    return 0;
}