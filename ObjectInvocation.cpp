//Using This pointer in set_Data() function
#include <iostream>
using namespace std;

class pntr_obj{
    string name;
    int roll_no;

    public:
    void set_Data(string name, int roll_no);
    void print_Data();
}; 

void pntr_obj::set_Data(string name, int roll_no) {
    this -> name = name;
    this -> roll_no = roll_no;
}

void pntr_obj::print_Data() {
    cout << "Name: " << name << endl;
    cout << "Roll No: " << roll_no << endl;
    cout << endl;
}

int main() {
    pntr_obj obj1, obj2, obj3;

    obj1.set_Data("Umer", 6);
    obj1.print_Data();

    obj2.set_Data("Raza", 8);
    obj2.print_Data();

    obj3.set_Data("Umer Raza", 68);
    obj3.print_Data();

}