//Program to manipulate an array through Classes 
#include <iostream>
#include <limits> 
#include <array>
using namespace std;
//Size of array
#define SIZE 3

class Integer{
    array<int, SIZE> arr;

    public:
        Integer();
        friend int maxNum();         //Find the largest integer in the array.
        friend int minNum();       //Find the smallest integer in the array.
        friend int repeatedNum(int); //Find the repeated elements in array.
        friend int Sort();       //Sort the elements of array in ascending order.
        ~Integer();                     //Create a destructor that sets all of the elements in the array to 0
};
//Contructor to initilize array
Integer::Integer() : arr{3,2,1} {}
//Friend function to find max in array
int maxNum(){
    Integer obj;
    int max = INT32_MIN;
    for(int i=0; i<SIZE; i++){
        if(obj.arr[i] > max){
            max = obj.arr[i]; 
        }
    }
    return max;
}
//Friend function to find min in array
int minNum(){
    Integer obj;
    int min = INT32_MAX;
    for(int i=0; i<SIZE; i++){
        if(obj.arr[i] < min){
            min = obj.arr[i]; 
        }
    }
    return min;
}
//Friend function to find particular repeated number in array
int repeatedNum(int x){
    Integer obj;
    int count = 0;
    for(int i=0; i<SIZE; i++){
        if(obj.arr[i] == x){
            count++;
        }
    }
    return count;
}

int Sort(){
    Integer obj;
    sort(obj.arr);
}

Integer::~Integer() { for(int i=0; i<SIZE; i++) arr[i]=0; }

int main() {
    maxNum();
    minNum();
    repeatedNum(3);
    Sort();
    return 0;
}