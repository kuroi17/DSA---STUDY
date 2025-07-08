#include <iostream>
using namespace std;


int main (){
    int size;
    cout << "Enter how many Saja Boys you want to see: ";
    cin >> size;

     string sajaboys[] = {"Jinu","Abby","Mystery","Romance","Baby"};
     int sajaBoys = sizeof(sajaboys) / sizeof(sajaboys[0]);
   

    if (size > 0){
        string* DynamicArray = new string [size];
    for (int i = 0; i < size; i++){
      DynamicArray[i] = sajaboys[i % sajaBoys]; // Fill the array with Saja
    }    
    cout << "SAJA BOYS: ";
    for (int i = 0; i < size; i++){
        cout << DynamicArray[i] << " ";
    }
    delete[] DynamicArray; // Deallocate the memory
    cout << endl;
     }
    else{
        int* DynamicArray = nullptr;
        cout << "The pointer is null! ";
    }
    
    
    
    return 0;
}