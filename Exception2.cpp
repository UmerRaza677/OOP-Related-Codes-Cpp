#include <bits/stdc++.h>
using namespace std;

// A dummy class
class GfG {
    public:
    GfG() {
        cout << "Object Created" << endl;
    }
    ~GfG() {
        cout << "Object Destroyed" << endl;
    }
};

int main() {
    try {
        cout << "Inside try block" << endl;
        GfG gfg;
        throw 10;
		cout << "After throw" << endl;
    }
    catch (int e) {
        cout << "Exception Caught" << endl;
    }
    cout << "After catch" << endl;
    return 0;
}