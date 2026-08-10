#include<iostream>
#include<cstdio>    
using namespace std;

int main() {
    int status = remove("file1.asm");

    if (status != 0)
        cout << "File deleted successfully." << endl;
    else    
        cout << "Failed! file is not deleted." << endl;
return 0;
}