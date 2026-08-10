#include <iostream>
#include <stdexcept>
using namespace std;

double divide(double nominator, double denominator){
    try{
        if (denominator == 0)
            throw invalid_argument("Denominator is zero");
        return nominator / denominator;
    }
    catch (const exception& e){
        cout << "Division by zero is illegal: " << e.what() << endl;
        throw;
    }
}

int main() {

    try {
        double result = divide(20, 2);
        cout << "Result: " << result << endl;
    }
    catch (const exception& e){
        cout << "Exception handaled from main: " << e.what() << endl;
    }

    return 0;
}