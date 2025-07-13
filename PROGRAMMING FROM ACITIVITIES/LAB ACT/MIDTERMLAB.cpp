#include <iostream>
using namespace std;


int main (){
int size;
cout << "Enter the size of the dynamic array: ";
cin >> size;

int* dynamicArray = new int[size];

if(dynamicArray != nullptr){
    for (int i = 0; i < size; i++){
        dynamicArray[i] = i * 5;
    }
    cout << "Elements: ";
    for (int i = 0; i < size; i++){
        cout << dynamicArray[i] << " ";
    }
    delete[] dynamicArray; // Deallocate the memory
}





    return 0;
}