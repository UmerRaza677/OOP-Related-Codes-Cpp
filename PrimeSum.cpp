#include <iostream>
using namespace std;

class PrimeSum{
    int num;

    public:
        PrimeSum() : num() {}; //Default contructor
        PrimeSum(int n) : num(n) {}; // val assgin through constructor
        friend void primePairs(); //Friend function declaration
        bool isPrime(int n); //function declaration
        void print(int x, int y);//print function
};
//Method to decide that number is prime or not
bool PrimeSum::isPrime(int n) {
    if(n <= 1) return false; // 0 & 1 are not prime
    if(n == 2) return true; // 2 is only even prime number
    if(n % 2 == 0) return false; // even number are not prime
    //Logic for getiing prime
    for(int i = 3; i * i <= n; i += 2){
        if (n % i == 0) return false; //if not prime
    }
    return true; // if prime
}
// method for print vals
void PrimeSum::print(int x, int y){
    cout << "(" << x << ", " << y << ")" << endl;
}

//Methode to get prime pairs
void primePairs(int n) {
    PrimeSum obj;

    cout << "Pairs which sum is equal to " << n << ".\n";

    for(int i = 2; i <= n/2; i++) {
        if (obj.isPrime(i) && obj.isPrime(n - i)){
            obj.print(i, n - i); //calling print function
        }
    }
}

int main(){
    int n = 34; //giving number
    primePairs(n);
    return 0;
}