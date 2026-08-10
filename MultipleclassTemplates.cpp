#include <iostream>
using namespace std;

template <typename T1, typename T2, typename T3>
class Student{
    private:
        T1 val1;
        T2 val2;
        T3 val3;
    public:
        Student(T1 v1, T2 v2, T3 v3) : val1(v1), val2(v2), val3(v3) {}

        void displayContent(){
            cout << val1 << ", " << val2 << ", " << val3 << ", " << endl;
        }
};

int main() {

    Student<string, string, string> s("Name", "RollNo", "CGPA");    s.displayContent();
    // Auto detuction of datatypes, on c++17 and onwards
    Student s1("Umer", 68, 2.57);                                   s1.displayContent();
    Student<string, int, double> s2("Raza", 80, 2.68);              s2.displayContent();
    Student<string, int, double> s3("Sharjeel", 90, 3.0);           s3.displayContent();
    Student<string, int, double> s4("Tahir", 70, 3.67);             s4.displayContent();
    Student<string, int, double> s5("Haseeb", 60, 3.9);             s5.displayContent();


return 0;
}