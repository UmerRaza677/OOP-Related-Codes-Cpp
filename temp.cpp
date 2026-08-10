// #include <iostream>
// using namespace std;
// class Fraction
// {
//     private:
//     int num, den;

//     public:
//     Fraction(int n, int d)
//     {
//         num = n;
//         den = d;
//     }

//     // Conversion operator: return float value of fraction
//     operator float() const
//     {
//         return float(num) / float(den);
//     }
// };

// int main()
// {
//     Fraction f(10, 5);
//     float val = f;
//     cout << val << '\n';
//     return 0;
// }

//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
// #include <iostream>
// using namespace std;

// class Point
// {
//     private:
//     int x, y;

//     public:
//     Point(int i = 0, int j = 0)
//     {
//         x = i;
//         y = j;
//     }
//     void print()
//     {
//         cout << "x = " << x << ", y = " << y << '\n';
//     }
// };

// int main()
// {
//     Point t(20, 20);
//     t.print();
//     t = 30;
//     t.print();
//     return 0;
// }

//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
// #include <iostream>
// #include <vector>
// using namespace std;

// class Matrix {
// private:
//     vector<vector<int>> data;
//     int rows, cols;

// public:
//     Matrix(int r, int c) : rows(r), cols(c) {
//         data.resize(rows, vector<int>(cols));
//     }

//     void setValue(int r, int c, int value) {
//         data[r][c] = value;
//     }

//     // Cast operator: Matrix -> vector<int>
//     operator vector<int>() const {
//         vector<int> result;
//         for (const auto& row : data) {
//             for (int value : row) {
//                 result.push_back(value);
//             }
//         }
//         return result;
//     }
// };

// int main() {
//     Matrix m(2, 3);

//     // Fill matrix with sample values
//     int counter = 1;
//     for (int i = 0; i < 2; i++) {
//         for (int j = 0; j < 3; j++) {
//             m.setValue(i, j, counter++);
//         }
//     }

//     // Convert matrix to vector
//     vector<int> vec = m;

//     // Output the vector
//     cout << "Converted Vector: ";
//     for (int v : vec) {
//         cout << v << " ";
//     }
//     cout << endl;

//     return 0;
// }

//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
// #include <iostream>
// #include <vector>
// using namespace std;

// class Polynomial {
// private:
//     vector<double> coeffs;   // coeffs[i] represents the coefficient of x^i

// public:
//     Polynomial(const vector<double>& c) : coeffs(c) {}

//     // Overload function call operator to evaluate polynomial at x
//     double operator()(double x) const {
//         double result = 0.0;
//         double power = 1.0;

//         for (double coef : coeffs) {
//             result += coef * power;
//             power *= x;  // move to next power of x
//         }
//         return result;
//     }
// };

// int main() {
//     // Polynomial: 2 + 3x + 4x^2
//     Polynomial p({2, 3, 4});

//     double x = 5.0;
//     double value = p(x);

//     cout << "Polynomial value at x = " << x << " is: " << value << endl;

//     return 0;
// }

