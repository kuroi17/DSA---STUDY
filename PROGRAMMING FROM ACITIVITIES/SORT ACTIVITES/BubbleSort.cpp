#include <iostream>
using namespace std;



void BubbleSort(int arr[], int size){
    for (int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1;j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
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

BubbleSort(arr, size);
cout << endl;
cout << "Array after sorting (Ascending Order):\n";
for (int i = 0; i < size; i++){
    cout << arr[i] << " ";
    
}
    
    
    
    return 0;
}