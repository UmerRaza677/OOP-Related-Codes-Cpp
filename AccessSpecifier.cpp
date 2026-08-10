#include <iostream>
using namespace std;

class A{
    private:
        int privdataA;
    protected:
        int protdataA;
    public:
        int pubdataA;

        int getPublicA() { return pubdataA;}

        int getProtectedA() { return protdataA;}

        int getPrivateA() { return privdataA;}
};

class D : protected A 
class
{
    protected:
        int privdataD;
        int protdataD;
        int pubdataD;

        int getPublicD() { return pubdataD;}

        int getProtectedD() { return protdataD;}

        int getPrivateD() { return privdataD;}
};

int main() {
    int a, d;

    D objD;

    return 0;
}