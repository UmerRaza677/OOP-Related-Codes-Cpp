#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // open the file for reading
    fstream filein("file.txt", ios::in);
    string myText;

    while(getline(filein, myText)){
        cout << myText << endl;
    }

    if (filein.eof()){
        cout << "Reached End Of Line!!!" << endl;
    }
    else {
        cerr << "ERROR: While reading file!" << endl;
    }

    filein.close();

    // open the file for writing
    fstream fileout("file.txt");
        fileout << "My name is Umer" << endl;
        fileout << "This file is written with the help of C++ code.\n";
    fileout.close();
    return 0;
}