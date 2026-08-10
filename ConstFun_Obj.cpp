#include <iostream>
using namespace std;

class Test{
    private:
        int value;
    public:
        Test(int val) : value(val) {}   // Contructor
        //Setter
        void setValue(int val) {
            value = val;}
        //Getter
        int getValue() const{
            return value;}
};

int main() {
    // Const object
    const Test obj(5);
    cout << obj.getValue() << endl;  //Call getter function
    obj.setValue(10); //Error, read-only  due to const object

    // Simple object
    Test simp_obj(10);
    cout << simp_obj.getValue() << endl;  //Call getter function
    simp_obj.setValue(20);
    cout << simp_obj.getValue() << endl;
    return 0;
}