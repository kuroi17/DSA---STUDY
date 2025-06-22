#include <iostream>
using namespace std;

void SelectionSort (int arr[], int size){
    for(int i = 0; i < size - 1; i++){
    int min_index = i;    
    
    for (int j = i+1; j < size; j++){
        if (arr[j] < arr[min_index]) {
            min_index = j;
            
        }
    }
    swap(arr[min_index], arr[i]);
    }
}


int main (){

int size;


cout << "Enter number of elements: ";
cin >> size;
cout << "Enter " << size << " elements:\n";

int arr[size];
for (int i = 0; i < size; i++){
    cin >> arr[i]; 
}
cout << endl;

cout << "Array before sorting:\n";
for (int i = 0; i < size; i++){
    cout << arr[i] << " ";
}
cout << endl;

SelectionSort(arr, size);
cout << endl;
cout << "Array after sorting (Ascending Order):\n";
for (int i = 0; i < size; i++){
    cout << arr[i] << " ";
    
}

 return 0;
}