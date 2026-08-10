#include<iostream>
using namespace std;

// Base class (Parent)
class Vehicle {
  public:
    string brand = "Ford";
    void honk() { cout << "Tuut, tuut! \n"; }
};

// Derived class (Child)
class Car: public Vehicle {
  public:
    string model = "Mustang";
};

int main() {
  Car myCar;
  myCar.honk(); // Accessing parent method
  cout << myCar.brand + " " + myCar.model + "\n"; // Accessing parent and child attributes
  return 0;
}
