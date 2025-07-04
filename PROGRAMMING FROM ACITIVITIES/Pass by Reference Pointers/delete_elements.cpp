#include <iostream>
using namespace std;

void deleteElement(int arr[], int* size, int* value){
    for (int i = 0; i < *size; i++){
        if (arr[i] == *value){
            
            
            for (int j = i ; j < *size - 1; j++){
                arr[j] = arr[j+1];
            }
        --*size;
        break;
    
        }        
    }
    
    cout << "The updated array is: ";  
    for (int i = 0; i < *size; i++){
        cout << arr[i] << " ";
    }
    
}



int main (){
int size;

cout << "Enter the size of the array: ";
cin >> size;

int arr[size];

cout << "Enter the elements of the array:\n";
for(int i = 0; i < size; i++){
    cin >> arr[i];
}
int value;
cout << "Enter the value of the element to be deleted: ";
cin >> value;
deleteElement(arr, &size, &value);
    
    return 0;
}