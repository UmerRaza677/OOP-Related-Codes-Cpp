#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b){
    return a + b;
}

int main(){

    cout << add<int>(2, 4) << endl;
    cout << add<double>(3.5, 2.9) << endl;
    cout << add<string> ("Umer_", "Raza") << endl;
    cout << add<char>('A', '2') << endl;

    return 0;
}