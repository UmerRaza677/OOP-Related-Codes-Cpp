#include <iostream>
#include <vector>
using namespace std;

int main() {
  // Create a vector called cars that will store strings
  vector<string> cars  = {"Volvo", "BMW", "Ford", "Mazda"};
  // Print vector elements
//   cout <<cars.front() << endl;
//   cout <<cars.back() << endl;
//   cout <<cars.at(2) << endl;
  cars.push_back("Honda");
    cars.push_back("Honda");

    cars[3] = "Benz";

  for (string car : cars) {
    cout << car << "\n";
  }

   cars.pop_back();
   cout << cars.size() << endl;

   cout << cars.empty() << endl;

  return 0;
}
