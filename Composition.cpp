#include <iostream>
using namespace std;

class Room{
    public:
        Room(){
            cout << "Room Created." << endl;
        }

        ~Room() {
            cout << "Room Destroyed." << endl;
        }
};

//Composition
class House{
    private:
        Room room;

    public:
        House() {
            cout << "House Created." << endl;
        }

        ~House() {
            cout << "House is Destroyed." << endl;
        }
};

int main() {
    House house;
    return 0;
}