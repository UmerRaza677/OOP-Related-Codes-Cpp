//Applying function templates
#include <iostream>
#include <string>
using namespace std;

template <class T>
T find_max(T a, T b){
    T result;
    result = (a > b) ? a : b;
    return result;
}

int main(){
    //for int
    int i = find_max<int>(8, 3);
    cout << i << endl;

    //for float
    float f = find_max<float>(3.5, 3.9);
    cout << f << endl;

    //for int
    char ch = find_max<char>('A', 'a');
    cout << ch << endl;

    //for string
    string s = find_max<string>("Umer", "Raza");
    cout << s << endl;

    return 0;
}