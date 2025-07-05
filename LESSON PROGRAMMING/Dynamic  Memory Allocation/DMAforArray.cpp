#include <iostream>
using namespace std;
int main (){

int size;
cout << "Enter the size of the array: ";
cin >> size;

int* dynamicArray = nullptr;

if (size > 0) {
    dynamicArray = new int[size]; // Only allocate if size is valid. For allocation 
} else {
    cout << "Memory allocation failed " << endl;
}

if (dynamicArray != nullptr) { // Check if memory allocation was successful
    cout << "Enter " << size << " elements for the array:" << endl;
    
    for (int i = 0; i < size; i++){
        cin >> dynamicArray[i];
    }

    for (int i = 0; i < size; i++){
        if (dynamicArray[i] % 2 == 0){
            dynamicArray[i] = dynamicArray[i] * 2; 
        } 
        else{
            dynamicArray[i] = dynamicArray[i] * 3; 
        }
    }

    for (int i = 0 ; i < size; i++){
            cout << "Element " << i+1 << ": " << dynamicArray[i] << endl;
    }

    delete[] dynamicArray; // Deallocate the memory
} 
    return 0;
}