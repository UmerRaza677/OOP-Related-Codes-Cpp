#include <iostream>
#include <vector>

using namespace std;

//Declaration of functions
void output_of_vector(vector<int> v);
void revers_output_of_vector(vector<int> v);

int main() {
  vector<int> marks;
  for (int i = 1; i <= 5;  i++) {
      marks.push_back(i * 10);
  }

  int val = marks[2];
  cout << val << endl;   //accessing particular value from vector

  //Alternate to initionate vector
  //vector<int> marks{10, 20, 30, 40, 50};

  output_of_vector(marks); //print vector in order
  revers_output_of_vector(marks); //print vector in revers order

  //erase_particular_value_from_vector
  auto ptr = marks.begin();
  marks.erase(ptr + 1);
  output_of_vector(marks);
  marks.erase(ptr + 3);
  output_of_vector(marks);
  //insert_particular_value_from_vector
  marks.insert(ptr + 3, 100);
  output_of_vector(marks);

  return 0;
}

void output_of_vector(vector<int> v){

  // cout << "[ ";
  // for(int x : v){      //this loop usualy call for_each looop, we can read it like (each integer x from v)
  //   cout << x << " ";
  // }
  // cout << " ]" << endl;

  //Alternate
  cout << "[ ";
  for(auto i = v.begin(); i != v.end(); i++){ // auto ('auto' keyword only use for pointer) is a keyword which automatically assign a type(string, int, float etc. in this case it's int cause integer vector) to only pointer
    cout << *i << " ";      // we access value from vector through pointer de-refrencing, '*i'
  }
  cout << "]" << endl;
}


void revers_output_of_vector(vector<int> v){

  cout << "[ ";
  for (auto i = v.rbegin(); i != v.rend(); i++){
    cout << *i << " ";
  }
  cout << " ]" << endl;

}
