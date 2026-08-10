/*Write the implementation of a class named Binary having two data (x and y) of type integer 
    with private access. Data member of this class should contain 1 and 0 (default value)
    for a particular object.

  1.  With parameterized and copy constructor.
  2.  Overload stream extraction operator for taking the inputs for a particular object data
     from the user.
  3.  Write getEqualBinary function which accepts an array of Binary object with its size 
    and return a newly created array having at those object that are equal to the 
    left-hand-side (calling) object. The function should also 	store the size of newly 
    created array into a third parameter named newSize 	which is passed by reference to the 
    function. The function should return 	NULL and store 0 in newSize, if all the objects 
    are different from the	left-	hand-side (calling) object
*/
#include<iostream>
using namespace std;

class Binary{
private:
    int a, b;

    int newSize = 0;
public:
    Binary() : a(0), b(1) {}             // Defaualt Constructor
    Binary(int x, int y) : a(x), b(y) {} // Perameterized Constructor
    Binary(const Binary& other){        // Copy Constructor
        a = other.a;
        b = other.b;
    }

    friend istream& operator>>(istream& in, Binary& obj) { // >> operator overloading to
        in >> obj.a >> obj.b;                            // get object as input.
        return in;
    }

    // == Opetrator Overloading
    bool operator==(const Binary &obj) const{
        return (a == obj.a && b == obj.b);
    }

    //Getters
    int getA() const { return a; }
    int getB() const { return b; }

     /*Function to get array of objects equal to calling object
        newSize is passed by reference to store size of resulting array*/
    Binary* countEqualBinar(Binary array[], int size, int &newSize){
        newSize = 0;

        // First count how many objects are equal
        for(int i = 0; i < size; i++){
            if(*this == array[i]){
                newSize++;
            }
        }

        // If no objects are equal, return NULL
        if(newSize == 0)
            return nullptr;

        // Create array of correct size to store equal objects
        Binary* equalArr = new Binary[newSize];
        int index = 0;

        // Copy equal objects into new array
        for(int i = 0; i < size; i++){
            if(*this == array[i]){
                equalArr[index++] = array[i];
            }
        }
        return equalArr; // Caller will delete this array
    }

    ~Binary(){ }
};

int main(){
    Binary b1(5, 20);
    Binary b2(10, 20);
    Binary b3(b2);      // Copy Constructor

    // >> operaotr used
    Binary b4;
    cout << "Enter two values: ";
    cin >> b4;

    // Array of 'Binary' Objects
    Binary* b_arr = new Binary[4] {b1, b2, b3, b4};

    // Call getEqualBinary for object b1
    int newSize = 0;
    Binary* equalArr = b1.countEqualBinar(b_arr, 4, newSize);

    if(equalArr == nullptr){
         cout << "No equal objects found." << endl;
    } else {
        cout << "Equal objects found:" << endl;
        for (int i = 0; i < newSize; i++) {
            cout << "Object " << i + 1 << ": "
                 << equalArr[i].getA() << " "
                 << equalArr[i].getB() << endl;
        }
        delete [] equalArr;
    }

    delete [] b_arr;

    return 0;
}