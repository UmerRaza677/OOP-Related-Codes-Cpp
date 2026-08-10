//concept of static polymorphism or early binding

#include <iostream>
#include <array>

using namespace std;

class Animal {
public:
virtual  void  make_sound () {
      cout << "The animal makes a sound." << endl;
    }
};
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
class Cat : public Animal {
public:
  void  make_sound () {
      cout << "Cat --> Meow" << endl;
    }
};
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
class Dog : public Animal {
public:
  void  make_sound () {
      cout << "Dog --> Bark." << endl;
    }
};
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
class Bird : public Animal {
public:
  void  make_sound () {
      cout << "Bird --> Chirp." << endl;
    }
};
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX


//MAIN Functon
int main() {
  Animal* ptr[4];

  Animal a1;
  Cat c1;
  Dog d1;
  Bird b1;

  ptr[0] = &a1;
  ptr[1] = &c1;
  ptr[2] = &d1;
  ptr[3] = &b1;

  for(int i = 0; i < 4; i++){
      ptr[i] -> make_sound();
  }



  return 0;
}
