#include<iostream>
#include<array>
#include<iomanip>
using namespace std;

int main() {

    array<int, 5> arr;
    array<int, 5> arr1{10, 20, 30, 39, 20};

    for(size_t i = 0; i < arr.size(); ++i)
        arr[i] = i * 10;

        cout << setw(10);

    for(size_t j = 0; j < arr.size(); j++)
        cout << arr[j] << " ";

    cout << endl;

    for(size_t j = 0; j < arr1.size(); j++)
        cout << arr1[j] << " ";

    cout << endl;

    return 0;
}