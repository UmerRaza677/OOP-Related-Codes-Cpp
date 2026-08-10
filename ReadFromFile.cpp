#include <iostream>
#include <fstream>
using namespace std;

int main() {

    ifstream Rfile("file.txt");

    string MyText;

    while(getline(Rfile, MyText)){
        cout << MyText << endl;
    }

    Rfile.close();

    ofstream Pdf("file2.pdf");
    Pdf.clear();
    Pdf.close();

    return 0;
}