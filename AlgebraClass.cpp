/*  Provide the implementation of a class name 'Algebra' having two data members (a and b) of 
  type integer with private access.

1. Data members of this class should contain positive data or 0(default value) for a 
    particular object. Write all set functions for each data member to set their values.
2. Implement default(sets all data members to 0), perameterized and copy constructor.
3. Implement putData member function to display the data of an object on console.
4. Overload arithmetic assignment operator(+=) to add and assign data of one object to 
    another.
5. Overload stream extraction operator for taking inputs for a particular object.
6. Overload arithmetic minus (-) operator to return the result of two objects after 
    subtraction.
7. overload unary + operator , return true if an object contain data greater then 0, 
    else false.
8. Implement countEqualObjects member function which accepts an array of 'Algebra' objects 
    and return the total count of all the objects which is equal to the left hand side object.
*/
#include <iostream>
using namespace std;
 
class Algebra{
    private:
        int a;
        int b;

        // Validate function
        int Validate(int value){
            return value > 0 ? value : 0; 
        }
    
    public:
        Algebra() : a(0), b(0) {}       //Defualt contructor

        Algebra(const int x, int y){          //Perameterized constructor
            a = Validate(x);
            b = Validate(y);
        }

        Algebra(const Algebra& other){        //Copy Constructor
            this->a = other.a;
            this->b = other.b;
        }
    
        void setA(const int a){               //Setter for a
            this->a = Validate(a);
        }

        void setB(const int b) {               //Setter for b
            this->b = Validate(b);
        }

        void putData() const{                   //PutData for displaying data
            cout << "a = " << a << ", b = " << b << endl;
        }

        Algebra operator+=(const Algebra &other){ //+= operator overloading
            a += other.a;
            b += other.b;
            return *this;
        }

        Algebra operator/=(const Algebra &other){ // /= operator overloading
            a /= other.a;
            b /= other.b;
            return *this;
        }

        Algebra operator-(const Algebra &other){ // - operator overloading
            return Algebra(a - other.a, b - other.b);
        }

        bool operator+(){ // + unary operator
            return (a > 0 && b > 0);
        }

        // Overload >> operator (Extraction)
        friend istream& operator>>(istream &in, Algebra &obj){
            int x, y;
            in >> x >> y;
            obj.a = obj.Validate(x);
            obj.b = obj.Validate(y);
            return in;
        }

        // Overload << operator (Extraction)
        friend ostream& operator << (ostream &out, Algebra &obj){
            int x, y;
            out << x << y;
            obj.a = obj.Validate(x);
            obj.b = obj.Validate(y);
            return out;
        }

        bool operator==(const Algebra &other){   // == operator overloading
            return (this->a == other.a && this->b == other.b);
        }

        int countEqualObject(Algebra arr[], int size) {
            int count = 0;

            for(int i = 0; i < size; i++){
                if(*this == arr[i]){
                    count++;
                }
            }
            return count;
        }
};

int main(){
    Algebra obj1(10, 20);
    Algebra obj2(10, 20);
    

    obj1.putData();
    obj2.putData();

    //+ unary operator
    if(+obj1)   cout << "Positve object" << endl;
    else        cout << "Negative object" << endl;

    //+= operator
    obj1 += obj2;
    obj1.putData();

    // - operator
    Algebra obj3 = obj1 - obj2;
    obj3.putData();

    // >> operator 
    Algebra obj4;
    cout << "Enter two values: ";
    cin >> obj4;
    obj4.putData();

    // Count equal objects
    Algebra* array = new Algebra[4] {obj1, obj2, obj3, obj4};
    cout << "Equal objects count: "
        <<obj1.countEqualObject(array, 4) << endl;

    Algebra arr[4] = {obj1, obj2, obj3, obj4};
    cout << "Equal objects count: "
        <<obj1.countEqualObject(arr, 4) << endl; 

    Algebra obj5;
    obj5.setA(30);
    obj5.setB(35);
    cout << "Obj5 values: " << obj5 << endl;

    // /= operator
    Algebra obj6(30, 60);
    obj6 /= obj4;
    obj6.putData();


    return 0;
}
