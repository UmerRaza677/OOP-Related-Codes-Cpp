#include <iostream>
using namespace std;

class Numbers{
    private:
        int* arr;
        int size;
    
    public:
        // default Constructor
        Numbers(int s){
            size = s;
            arr = new int[size];
            for(int i = 0; i < s; i++){
                arr[i] = 0;
            }
        }

        // Perameterized Constructor
        Numbers(int s, int values[]){
            size = s;
            arr = new int[size];
            for (int i = 0; i < s; i++) {
                arr[i] = values[i];
            }
        }

        // DeepCopy Constructor
        Numbers(const Numbers& other){
            size = other.size;
            arr = new int[size];
            for(int i = 0; i < other.size; i++){
                arr[i] = other.arr[i];
            }
        }

        ~Numbers() {
            delete [] arr;
        }

        // Setter for array
        void setVal(int index, int value){
            if(index >= 0 && index <= size)
                arr[index] = value;
        }

        // Display methode
        void display() {
            for(int i = 0; i < size; i++)
                cout << arr[i] << " ";
            cout << endl;
        }
};

int main() {
    int values[] = {1,2,3,4,5};

    Numbers Nums(5, values);
    Nums.display();

    cout << "-------------" << endl;

    Nums.setVal(0, 68);
    Nums.display();

    cout << "-------------" << endl;

    Nums.setVal(1, 80);
    Nums.display();

    return 0;
}