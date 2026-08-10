/*• Create a base class Vehicle with a data member ‘maxSpeed’.
• Create derived classes Car and Bicycle with data member ‘speed’
• Create an instance of each derived class and set their speed and vehicle maxSpeed
*/

#include <iostream>
#include<string>

using namespace std;

class Vehicle {
public:
  Vehicle(){cout << "Vehicle Constructor called" << endl;}
  int maxSpeed;
  ~Vehicle(){cout << "Vehicle destructor called" << endl;}
};

class Car : public Vehicle {
public:

  Car(){cout << "Car Constructor called" << endl;}
  int speed;
  ~Car(){cout << "Car destructor called" << endl;}
};

class Bicycle : public Vehicle {
public:
    Bicycle(){cout << "Bicycle Constructor called" << endl;}
  int speed;
  ~Bicycle(){cout << "Bicycle destructor called" << endl;}
};

int main() {

  Vehicle v1;

  Car c1;
  c1.speed = 60;
  c1.maxSpeed = 50;
  cout << "Car speed is " << c1.speed << "kmh." << endl;
  cout << "Vehicle speed is " << c1.maxSpeed << "kmh." << endl;

  Bicycle b1;
  b1.speed = 15;
  b1.maxSpeed = 5;
  cout << "Bicycle speed is " << b1.speed << "kmh." << endl;
  cout << "Vehicle speed is " << b1.maxSpeed << "kmh." << endl;
  return 0;
}
