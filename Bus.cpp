#include <iostream>
#include <string>
using namespace std;

//class
class Bus{
    private:

        string busNo;           //Licence number
        string ownerName;       //Which owns the bus
        int capacity;        //capacity of students that bus can hold

    public:

        //Default Constructor
        Bus() {
            busNo = " ";
            ownerName = " ";
            capacity = 0;
        }
        //1st perameterized Constructor
        Bus(string bN, string oN) {
            cout << "1st perameterized Constructor of Bus is called" <<endl;
            busNo = bN;
            ownerName = oN;
            capacity = 0;
        }

        //2nd perameterized Constructor
        Bus(string bN,string oN, int cap) {
            cout << "2nd perameterized Constructor of Bus is called" <<endl;
            busNo = bN;
            ownerName = oN;
            capacity = cap;
        }

        //Destructor
        ~Bus() {
            cout << "Destructer is executed!" << endl;
        }

        // SETTERS
        void setBusNo(string bN){               //Setter
            busNo = bN;
        }

        void setOwnerName(string oN){           //Setter
            ownerName = oN;
        } 

        void setCapacity(int cap){              //Setter
            capacity = cap;
        }

        //GETTERS
        string getbusNo(){                      //Getter
            return busNo;
        }

        string getOwnerName(){                  //Getter
            return ownerName;
        }

        int getcapacity(){                      //Getter
            return capacity;
        }

        //SetBus, getting Data from user 
        void setBus() {
            cout << "Enter Bus infromation:-" << endl;
            cout << "Licence number: ";
            getline(cin, busNo);     
            cout << "Owner Name: ";
            getline(cin, ownerName);
            cout << "Bus Capacity: ";
            cin >> capacity;
            cout << endl;
        }
    
        //Member function to output data
        void getBus(){
            cout << "Bus Information:-" << endl;
            cout << "Bus No: " << busNo << endl; 
            cout << "Bus owner: " << ownerName << endl;
            cout << "Capacity: " << capacity <<endl;
            cout << endl;
        }

        //Booking bus, which add 1 to capacity
        int bookBus() {
            cout << endl << "After booking:-" <<endl;
            return capacity += 1;
        }

        //cancel Booking bus, which minus 1 to capacity
        int cancelBooking() {
            cout << "After Cancelation booking:-" <<endl;
            return capacity -= 1;
        }
};

int main() {

    Bus bus1;

    //Calling Fucntions
    bus1.setBus();
    bus1.getBus();

    // bus1.bookBus();
    // bus1.getBus();
    bus1.cancelBooking();
    bus1.getBus();

    Bus bus2("GRT 1163", "Razaq Ahmed");
    Bus bus3("FBD 1353", "Hassan Ali", 23);

    return 0;
}