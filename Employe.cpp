#include <iostream>
#include <string>
using namespace std;

//class
class Employe{
    private:

        string name;
        string departmentName;
        string jobTitle;
        int ID;

    public:

        //Default Constructor
        Employe() {
            name = " ";
            departmentName = " ";
            jobTitle = " ";
            ID = 0;
        }
        //1st perameterized Constructor
        Employe(string nm, string dN, string jT, int id) {
            cout << "1st perameterized Constructor of Employe is called" <<endl;
            name = nm;
            departmentName = dN;
            jobTitle = jT;
            ID = id;
        }

        //2nd perameterized Constructor
        Employe(string nm, int id) {
            cout << "2nd perameterized Constructor of Employe is called" <<endl;
            name = nm;
            departmentName = " ";
            jobTitle = " ";
            ID = id;
        }

        //Destructor
        ~Employe() {
            cout << "Destructer called" << endl;
        }

        // SETTERS
        void setname(string nm){              //Setter
            name = nm;
        }

        void setDepartmentName(string dN){    //Setter
            departmentName = dN;
        } 

        void setJobTitle(string jT){        //Setter
            jobTitle = jT;
        }

        void setyearofPurchase(int id){    //Setter
            ID = id;
        }

        //GETTERS
        string getName(){                   //Getter
            return name;
        }

        string getDepartmentName(){        //Getter
            return departmentName;
        }

        string getJobTitle(){             //Getter
            return jobTitle;
        }

        int getID(){                      //Getter
            return ID;
        }
    
        //Member function to Input data from user
        void setInfo() {
            cout << "Enter employe infromation:-" << endl;
            cout << "Name: ";
            getline(cin, name);     
            cout << "Department: ";
            getline(cin, departmentName);
            cout << "Job title: ";
            getline(cin, jobTitle);
            cout << "ID number: ";
            cin >> ID;
            cout << endl;
        }
    
        //Member function to output data
        void getInfo(){
            cout << "Employe Information:-" << endl;
            cout << "Name: " << name<<endl;
            cout << "Id number: " << ID<<endl;
            cout << "Department name: " << departmentName<<endl;
            cout << "Job title: " << jobTitle<<endl;
            cout << endl;
    }
};

//to convert lower to upper
// void convet_cps(string str){
        // uppercase(str);
// }

int main() {

    Employe emp1;

    //Calling setinfo() & getInfo() functions
    emp1.setInfo();
    emp1.getInfo();

    Employe emp2("Umer Raza", "343", "434", 34);
    Employe emp3("Umer Raza", 34);

    return 0;
}