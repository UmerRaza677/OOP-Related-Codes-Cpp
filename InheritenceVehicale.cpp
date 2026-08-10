                            //INHERITENCE
#include<iostream>
using namespace std;

class Vehical{
    public:
    int TopSpeed;
    float Average;
};

class Scooty: public Vehical {
    public:
    Scooty (int speed, float Average, int HelmatSpace){
        TopSpeed = speed;
        this->Average = Average;
        HelmSpace = HelmatSpace;
    }

    void Print(){
        cout<<"Scooty: Yahmah" <<endl;
        cout<<"TopSpeed: "<<TopSpeed <<"KMh" <<endl <<"Average: "<<Average <<"KMl" <<endl
        <<"UnderSeat Space: " <<HelmSpace <<"cm"<<endl;
    }

    private:
    int HelmSpace;
};

class Bike: public Vehical{
    public:
    int Gears;

    Bike (int speed, float Average, int Gears){
        TopSpeed = speed;
        this->Average = Average;
        this->Gears = Gears;
    }

    void Print(){
        cout<<"Bike: Honda Seventy" << endl;
        cout<<"TopSpeed: "<<TopSpeed <<"KMh" <<endl <<"Average: "<<Average <<"KMl" <<endl
        <<"Gears: " <<Gears <<endl;
    }
};

int main() {

    Bike Honda(160, 35.9, 6); 
    Scooty scoty(80, 50.7, 10);

    Honda.Print();
    cout<<endl;
    scoty.Print();

    return 0;
}
