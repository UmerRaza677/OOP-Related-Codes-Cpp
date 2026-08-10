#include<iostream>
#include<fstream>
#include<string>
using namespace std;

// class Student{
//     public:
//         int num;
//         void display() {
//             cout << this << endl;
//         }
// };

// class Demo{
//     public:
//         Demo Fun1(){
//             cout << 1;return *this;
//         }

//         Demo* Fun2(){
//             cout << 2;return this;
//         }

//         Demo* Fun3(){
//             cout << 3; return this;
//         }
// };

// class Demo{
//     private:
//         int id;
//     public:
//         Demo(int id) : id(id) {}
//         void print(){
//             cout << "ID: " << id << endl;
//         }
// };

// class Chain{
//     private:
//         int value;
//     public:
//         Chain() : value(0) {}

//         Chain& setValue(int v){
//             value = v;
//             return *this;
//         }

//         Chain& incValue(){
//             value++;
//             return *this;
//         }

//         void Display(){
//             cout <<  "Value: " << value << endl;
//         }
// };

// class Base{
//     private:
//         int privateVal;
//     protected:
//         int protectedVal;
//     public:
        // Base(int privVal, int protVal) : privateVal(privVal), protectedVal(protVal) {}
// };
// class Derived : public Base{
//     public:
//         Derived(int privVal, int protVal) : Base(privVal, protectedVal) {}

//         void Display(){
//             cout << "Private Val: " << protectedVal << endl;
//         }
// };

// class Test{
//     public:
//         int num;
// };

int main() {

//    Test obj;
//    cout << obj.num << endl;

    // Derived obj(10, 20);
    // obj.Display();
   
    // ifstream file("file.txt");
    // if(!file){
    //     cout << "Error opening file....." << endl;
    //     return 1;
    // }

    // char ch;
    // while(file.get(ch)){
    //     cout << ch;
    // }

    // file.close();

    // Chain* obj = new Chain();
    // obj->setValue(10).incValue().incValue().Display();
    // delete obj;

    // Demo* id[3];

    // for(int i = 0; i < 3; i++){
    //     id[i] = new Demo(i + 1);
    // }
    // for(int i = 0; i < 3; i++){
    //     id[i]->print();
    // }
    // for(int i = 0; i < 3; i++){
    //     delete id[i];
    // }

    // fstream file; string s;
    // file.open("file.txt", ios::in);
    // getline(file, s, ';');
    // cout << s << endl;
    // Demo* obj;
    // obj->Fun2()->Fun1()->Fun3();

//     Student OOP;
//     OOP.num = 80;
//     OOP.display();
    return 0;
}
