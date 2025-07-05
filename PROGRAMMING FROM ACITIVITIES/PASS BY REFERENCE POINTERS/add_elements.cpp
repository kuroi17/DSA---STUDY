#include <iostream>
using namespace std;

void addElement(int arr[], int* size, int* value){
   
    
    cout << "Enter the value to be added: ";
    cin >> *value;
   
    
   arr[*size] = *value;
   
   (*size)++;
   
   cout << "Updated array:\n";
   for (int i = 0; i < *size; i++){
       cout << arr[i] << " ";
   }
}


int main (){
    
    int size,value;
    
    
    cout << "Enter the size of the array: ";
    cin >> size;
    
    int arr[100];
    
    cout << "Enter " <<  size << " elements:\n";
     
    for (int i = 0; i < size; i++){
        cin >> arr[i];
    }
    
    addElement(arr, &size, &value);
    
    
    
    
    
    
    
    return 0;
}