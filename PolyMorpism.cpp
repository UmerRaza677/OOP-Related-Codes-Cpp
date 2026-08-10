#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Employees{
    public:
        virtual void displayInfo() const{
            cout << "Employee Information" << endl;
        }
};

class Manager : public Employees{
    private:
        string department;

    public:
        Manager(string dept) : department(dept) {}

        void displayInfo() const override{
            cout << "Manager department: " << department << endl;
        }
};

class Developer : public Employees{
    private:
        string programmingLanguage;

    public:
        Developer(string lang) : programmingLanguage(lang) {}

        void displayInfo() const override{
            cout << "Developer programming language: " << programmingLanguage << endl;
        }
};

int main(){
    vector<Employees*> emps;
    emps.push_back(new Manager("HR"));
    emps.push_back(new Developer("Java"));

    for(const Employees* e : emps){
        e->displayInfo();
    }

    // Clean up dynamically allocated memory
    for(Employees* e : emps){
        delete e;
    }

    return 0;
}