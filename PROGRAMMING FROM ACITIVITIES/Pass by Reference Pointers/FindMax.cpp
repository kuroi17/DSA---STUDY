#include <iostream>
using namespace std;

void findMax(int arr[], int* size){
     int largest = arr[0];
    if (*size == 0){
            largest = 0;
        }
   
    for (int i = 0 ; i < *size; i++){
            if (arr[i] > largest){
                largest = arr[i];
            }
    }
    cout << "The maximum value in the array is " << largest << endl;
}

int main (){
    
    int size;
    
    cout << "Enter the size of the array: ";
    cin >> size;
    
    cout << "Enter the elements of the array:\n";
    int arr[size];
    
    for (int i = 0; i < size; i++){
        cin >> arr[i];
    }
    
    findMax(arr, &size);   
    
    
    return 0;
}