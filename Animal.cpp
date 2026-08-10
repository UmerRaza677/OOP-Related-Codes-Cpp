/*• Create a base class Animal with a data member ‘type’
• Create a derived class Dog with data member ‘sound’
• Create a derived class Turtle with data member ‘sound’
• Create an instance of Dog and Turtle, set the data members and the animal class (e.g., mammals,
fish, bird etc.) for each animal*/
#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
  string type;
};

class Dog : public Animal {
public:
  string sound;
};

class Turtle : public Animal {
public:
  string sound;
};

template <class T>
void print(T Anim){
  cout << "Type: " << Anim.type << endl << "Sound: " << Anim.sound << endl;
}

int main() {
  Dog d;
  d.type = "mammals";
  d.sound = "wow wow";
  print(d);

  Turtle t;
  t.type = "sea creature";
  t.sound = "trtrtrtr";
  print(t);
  return 0;
}
