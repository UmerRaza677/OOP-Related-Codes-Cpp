#include<iostream>
using namespace std;

//Factorial
int Factorial(int num){
  if(num == 0) return 1;

  return num * Factorial(num - 1);
}
//Sum
int Sum(int num){
  if(num == 1 || num == 0) return num;

  return num + Sum(num-1);
}
//print order of numbers
int print(int num){
  //Base case
  if(num == 0){
    return 1;
  }
  cout << num << endl;
  //Recursive Relation
  return print(num-1);

  //cout << num << endl;
}
//return nth Fibonacci number
int Fibonacci(int num){
  if(num == 0) return 0;
  if(num == 1) return 1;

  int ans = Fibonacci(num - 1) + Fibonacci(num - 2);
  return ans;
}
//Stairs problem
int Stairs(int n){
  if(n == 0) return 1;
  if(n < 0) return 0;

  return Stairs(n - 1) + Stairs(n - 2);
}
//Say Digit
void sayDigit(int num, string arr[]){
  //Base case
  if(num == 0)
    return;

  //processing
  int digit = num % 10;
  num = num / 10;

  //Recursive call
  sayDigit(num, arr);

  //print on consol
  cout << arr[digit] << " ";
}


void sayDigitTest(){
  int n;
  cout << "Enter a number: ";
  cin >> n;
  string arr[10] = {"zero", "one", "two",
                "three", "four", "five",
                "six", "seven", "eight", "nine"};

  sayDigit(n, arr);
}

int main() {
  //cout << "Factorial of 5: " << Factorial(5) << endl;
  //cout << "Sum of 5: " << Sum(5) << endl;
  //print(5);
  //cout << "7th Fibonocci number is " << Fibonacci(7);
  //cout << "Number of steps: " << Stairs(5);
  sayDigitTest();

  return 0;
}
