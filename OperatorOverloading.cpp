#include <iostream>
using namespace std;

//class use to decreement operator overloading
class Decreement{
    int num;

    public:
    Decreement() : num() {}
    Decreement(int n) : num(n) {}
    //display function
    void print() {cout << "Output = " << num;}
    //it apply's prefix decreeament
    Decreement operator-- (){
        num = num - 1;
        return Decreement(num);
    }
};

//class use to increement operator overloading
class Increement{
    int num;

    public:
    Increement() : num() {}
    Increement(int n) : num(n) {}
    //display function
    void print() {cout << "Output = " << num;}
    //it apply's postfix increeament
    Increement operator++ (int){
        num = num + 1;
        return Increement(num);
    }
};

//class use to negate a value operator overloading
class Negation{
    int num;

    public:
    Negation() : num() {}
    Negation(int n) : num(n) {}
    //display function
    void print() {cout << "Output = " << num;}
    //apply negation
    Negation operator- (){
        num = -num;
        return Negation(num);
    }
};

//class use to overload arithmetic operators, operator overloading
class Arithmetic{
    float value;

    public:
    Arithmetic() : value() {}
    Arithmetic(float n) : value(n) {}
    //display function
    void print() {cout << "Output = " << value ;}

    //+ operator
    Arithmetic operator+ (Arithmetic num){
        Arithmetic sub;
        sub.value = value + num.value;
        return Arithmetic(sub);
    }

    //- operator
    Arithmetic operator- (Arithmetic num){
        Arithmetic sub;
        sub.value = value - num.value;
        return Arithmetic(sub);
    }

    // (/) operator
    Arithmetic operator/ (Arithmetic num){
        if (num.value != 0)
            return Arithmetic(value / num.value);
    }

     // (*) operator
    Arithmetic operator* (Arithmetic num){
            return Arithmetic(value * num.value);
    }

};

//class use to overload Logical operators, operator overloading
class Logical{
    float value;

    public:
    Logical() : value() {}
    Logical(float n) : value(n) {}
    //display function
    void print() {
        if(value == true)
            cout << "True" ;
        else
            cout << "False"; 
        }

    //(==) operator
    Logical operator== (Logical num){
        return Logical(value == num.value);
    }

    //(!=) operator
    Logical operator!= (Logical num){
        return Logical(value != num.value);
    }

    //(<) operator
    Logical operator< (Logical num){
        return Logical(value < num.value);
    }

     // (>) operator
    Logical operator> (Logical num){
            return Logical(value > num.value);
    }

};



void apply_operator(){

    Logical obj, obj1(20), obj2(10);
    obj = obj1 == obj2;
    obj.print();

    // Arithmetic obj, obj1(10), obj2(20);
    // obj = obj1 * obj2;
    // obj.print();

    // Arithmetic obj, obj1(10), obj2(20);
    // obj = obj1 / obj2;
    // obj.print();

    // Arithmetic obj, obj1(10), obj2(20);
    // obj = obj1 + obj2;
    // obj.print();

    // Arithmetic obj, obj1(10), obj2(20);
    // obj = obj1 - obj2;
    // obj.print();

    // Negation num(10);
    // -num;
    // num.print();

    // Increement n(5);
    // n++;
    // n.print();

    // Decreement d1(10);
    // --d1;
    // d1.print();
}

//main function
int main() {
    apply_operator();

    return 0;
}