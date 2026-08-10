//when we calles Break fucn, speed decreases by 5 from CurrentSpeed
//when we calles Speed fucn, speed increases by 5 from CurrentSpeed
#include <iostream>
using namespace std;

//class, describing a Car
class Car{
    public:
        int Wheels;
        int Doors;
        int CurrentSpeed;
        int Break();
        int Speed() {
            return CurrentSpeed += 5;
        }
};

//Syntax for a fuction which is declare in class & define  outside of class
int Car::Break(){
    return CurrentSpeed -= 5;
}

//Printing the info
void print(Car C1){
    cout<<"Doors = " <<C1.Doors <<"\nWheels = " <<C1.Wheels <<"\nCurrentSpeed = " <<C1.CurrentSpeed <<endl;
}

int main() {

    Car Mustang, Ferrari;

    //Mustang
    Mustang.Doors = 4;
    Mustang.Wheels = 4;
    Mustang.CurrentSpeed = 360;
    //Mustang.Speed();
    Mustang.Break();
    cout<<"Mustang:\n";
    print(Mustang);

    //Ferrari
    Ferrari.Doors = 2;
    Ferrari.Wheels = 4;
    Ferrari.CurrentSpeed = 720;
    Ferrari.Speed();
    //Ferrari.Break();
    cout<<"\nFerrari:\n";
    print(Ferrari);

    return 0;
}