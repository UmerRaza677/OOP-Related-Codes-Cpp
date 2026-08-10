#include <iostream>
#include <string>
#include <cmath>
using namespace std;

//class
class Vehical{
    private:

        string company;
        string fuelType;
        string colour;
        string yearofPurchase;
        int yearofManufacture;
        int engineCapacity;

    public:

        int strToInt(string yop) {
            int
        }

        //Default Constructor
        Vehical() {
            company = " ";
            fuelType = " ";
            colour = " ";
            yearofPurchase = 0;
            yearofManufacture = 0;
            engineCapacity = 0;
        }
        //Perameterized Constructor
        Vehical(string cmp, string ft, string cl, int yop, int yom, int ec) {
            cout << "Perameterized Constructor of Vehicle is called" <<endl;
            company = cmp;
            fuelType = ft;
            colour = cl;
            yearofPurchase = yop;
            yearofManufacture = yom;
            engineCapacity = ec;
        }
        //Destructor
        ~Vehical() {
        }

        //Getter & Setters
        string getcompany(){            //Getter
            return company;
        }

        void setcompany(string comp){    //Setter
            company = comp;
        }

        string getfuelType(){            //Getter
            return fuelType;
        }

        void setfuelType(string fuel){    //Setter
            fuelType = fuel;
        } 

        string getcolour(){             //Getter
            return colour;
        }

        void setcolour(string clr){     //Setter
            colour = clr;
        }

        int getyearofPurchase(){        //Getter
            return yearofPurchase;
        }

        void setyearofPurchase(int YoP){    //Setter
            yearofPurchase = YoP;
        }

        int getyearofManufacture(){        //Getter
            return yearofManufacture;
        }

        void setyearofManufacture(int YoM){    //Setter
            yearofManufacture = YoM;
        }

        int getengineCapacity(){        //Getter
            return engineCapacity;
        }

        void setengineCapacity(int engCap){    //Setter
            engineCapacity = engCap;
        }
};

void displayDetails(Vehical v){

    cout << "Vehical details:-" << endl;
    cout << "Company Name: " << v.getcompany() <<endl;
    cout << "Fuel type: " << v.getfuelType() <<endl;
    cout << "Colour: " << v.getcolour() <<endl;
    cout << "Year of manufacture: " << v.getyearofManufacture() <<endl;
    cout << "Year of purchase: " << v.getyearofPurchase() <<endl;
    cout << "Engine capacity: " << v.getengineCapacity() <<" cc" <<endl;
    
}

void isOld(Vehical v){
    if(v.getyearofManufacture() == v.getyearofPurchase())
        cout << "Car is new." <<endl;

    else
        cout << "Car is "  << v.getyearofPurchase() - v.getyearofManufacture() << " years old" << endl;

}

// Get user input 
void getUserInput(Vehical &v) {
    string col, comp, fuelT; //colour, company, fuelType
    int yOp, yOm, enCap; //yearofPurchase, yearofManufacture, engineCapacity
    cout << "Enter vehical details:-" << endl;
    cout << "Enter company name: ";
    getline(cin, comp);                        //CompanyName
    cout << "Enter colour name: ";
    getline(cin, col);                        //Colour
    cout << "Enter fuel type: ";
    getline(cin, fuelT);                        //fuelType
    cout << "Enter year of purchase: ";
    cin >> yOp;                        //Year of Purchase
    cout << "Enter year of manufacture: ";
    cin >> yOm;                        //Year of Manufacture
    cout << "Enter engine capacity: ";
    cin >> enCap;                        //Engine Capacity

    //Setting Values by calling Setter Functions
    v.setcompany(comp);
    v.setcolour(col);
    v.setfuelType(fuelT);
    v.setyearofManufacture(yOm);
    v.setyearofPurchase(yOp);
    v.setengineCapacity(enCap);
}

int main() {

    //Default Constructor V1
    Vehical v1;
    // Get data from user into v1
    getUserInput(v1);
    cout << endl;
    //Print Details
    displayDetails(v1);
    //Fuction to check the state of car
    isOld(v1);
    cout << endl;

    //Perameterized Constructor V2
    Vehical v2(v2.getcompany(), v2.getfuelType(), v2.getcolour(), v2.getyearofPurchase(), v2.getyearofManufacture(), v2.getengineCapacity());
    cout << endl;
    //Print Details
    displayDetails(v2);
    //Fuction to check the state of car
    isOld(v2);

    return 0;
}