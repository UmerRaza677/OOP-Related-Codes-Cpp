 /* This C++ program demonstrates the dynamic input, compression, and output of an integer array.

  - The function 'InputArray' takes a reference to an integer 'size' and dynamically allocates memory for an integer array.
    It prompts the user to input the size and elements of the array and returns a pointer to the dynamically created array.

  - The function 'OutputArray' takes a constant integer pointer 'myarray' and a constant integer reference 'size'.
    It displays the elements of the array pointed to by 'myarray' using pointer arithmetic.

  - The function 'CompressArray' takes an integer pointer 'originalArr' and a reference to an integer 'size'.
    It creates a new dynamically allocated integer array 'compressedArr' to store the compressed version of the original array.
    The function compresses the original array by removing duplicate consecutive elements.
    It then updates the 'size' parameter with the new compressed size, deallocates the memory of the original array, and returns the compressed array.

  - In the 'main' function, the user is prompted to input the length of the array.
    It calls the 'InputArray' function to dynamically create the array and fill it with user-provided values.
    It then displays the original array using the 'OutputArray' function.

  - The 'CompressArray' function is called to obtain the compressed version of the original array.
    The compressed array is then displayed using the 'OutputArray' function.

  - Finally, memory allocated for the compressed array is deallocated using 'delete[]' to prevent memory leaks.

  Note: The program showcases dynamic memory allocation and manipulation of arrays using pointers.
  Remember to free up the memory allocated using 'new' with 'delete[]' to prevent memory leaks.
*/

#include <iostream>
using namespace std;

int* InputArray(int& size){
    cout << "Enter the size of array: ";
    cin >> size;

    int* arr = new int[size];

    cout << "Enter the values upto " << size << ":- " << endl;
    for(int i = 0; i < size; i++){
        cout << "arr[" << i << "] = "; 
        cin >> arr[i];
    }

    return arr;
}

void OutputArray(const int* myarray, const int &size){
    cout << "The values are: " << endl;
    cout << "[ ";
    for(int i = 0; i < size; i++){
        cout << *(myarray + i) << " ";
    }
    cout << "]" << endl;
}

int* CompressedArray(int *OrignalArr, int &size){
    int *compressArr = new int[size];
    int compressedSize = 0;

    compressArr[compressedSize] = OrignalArr[0];
    for(int i = 0; i < size; i++){
        if(OrignalArr[i] != OrignalArr[i - 1]){
            compressArr[compressedSize++] = OrignalArr[i]; 
        }
    }

    size = compressedSize;

    delete [] OrignalArr;

    return compressArr;
}

int main() {
    int size;

    int* array = InputArray(size);

    OutputArray(array, size);

    int* CompressArr = CompressedArray(array, size);
    int CompressSize = size;

    cout << "After Compression: " << endl;
    OutputArray(CompressArr, size);
    cout << endl;

    delete [] CompressArr;

    return 0;
}