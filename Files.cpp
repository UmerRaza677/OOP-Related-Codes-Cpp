#include <iostream>
#include <fstream>
using namespace std;

int main() {
    //Create and open a text file
    ofstream MyFile("file.txt");

    MyFile << "Hello, My name is Umer.\nI created you from a C++ program." << endl;
    MyFile << "Hey Buddy!!!!";
    

    ofstream PdfFile("file2.pdf");
    PdfFile << "Hi!!!!!!";

    PdfFile.close();

    MyFile << "\nRaza";
    MyFile.close();
    return 0;
}