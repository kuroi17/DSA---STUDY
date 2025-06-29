#include <iostream>
using namespace std;

int findPeakIndex(int arr[], int size){
    bool isPeak = false;
    for (int i = 1; i < size - 1; i++){
        if(arr[i] > arr[i+1] && arr[i] > arr[i-1]){
            isPeak = true;
            return i;
        }
    }
    return -1;
}

int main (){
    int size;
    
    cout << "Enter the number of elements in the array: ";
    cin >> size;
    
    int arr[size];
    
    cout << "Enter the array elements:\n";
    for (int i = 0; i < size; i++){
        cin >> arr[i];
    }
    int result = findPeakIndex(arr, size);
   
    if (result != -1){
        cout << "The peak element is at index " << result << endl;
    }
    else{
        cout << "No peak element found in the array" << endl;
    }
    
    
    /*
    if (result == -1){
         cout << "No peak element found in the array" << endl;
    }
    cout << "The peak element is at index " << result << endl;
    */
    return 0;
}