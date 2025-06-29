#include <iostream>

using namespace std;
void arrayZeroSum(int arr[], int size){
    bool isZeroSum = false;
    for (int i = 0; i < size; i++){
        if (arr[i] == (arr[i+1] / -1)){
        
        isZeroSum = true;    

        
        
       /* sum = arr[i] + arr[i+1]
        if (sum != 0){
            cout << "The array does not have two elements that sum to zero. ";
        } else{
            cout << "The array has two elements that sum to zero. ";
        } 
        */
        }
    }
        if (isZeroSum){
            cout << "The array has two elements that sum to zero. ";
        }
        else{
             cout << "The array does not have two elements that sum to zero. ";
        }
    
}
int main (){
    
    int size;
    
    cout << "Enter the size of the array: ";
    cin >> size;
    
    int arr[size];
    
    cout << "Enter the elements of the array:\n";
    
    for (int i = 0; i < size; i++){
        cin >> arr[i];
    }
    arrayZeroSum(arr,size);
    
    
    
    
    
    return 0;
}