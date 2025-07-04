#include <iostream>
using namespace std;
void insertionSort(int arr[], int n){
    for(int i = 1; i < n -1; i++){
        int key = arr[i];
        int j = i - 1;
        // Move elements of arr[0..i-1], that are greater than key,
        // to one position ahead of their current position
        while(j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j = j - 1;
            arr[j + 1] = key;
        }
    }
}
int main() {
    int size;
    cout << "Enter number of elements: ";
    cin >> size;

    int arr[size];
    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    insertionSort(arr, size);

    cout << "Sorted array:\n";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
// This code implements the Insertion Sort algorithm in C++.
// It sorts an array of integers in ascending order.