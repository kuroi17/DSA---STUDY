#include <iostream>
using namespace std;

void InsertionSort (int arr[], int size){
    for(int i = 0; i < size; i++){
        int key = arr[i];
        int j = i - 1;

        // Move elements of arr[0..i-1], that are greater than key,
        // to one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
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

InsertionSort(arr, size);
cout << endl;
cout << "Array after sorting (Ascending Order):\n";
for (int i = 0; i < size; i++){
    cout << arr[i] << " ";
    
}

 return 0;
}