#include <iostream>
using namespace std;

int findMostFrequentElement(int arr[], int size){
    int count = 1;
    int frequently = arr[0];
    for (int i = 0; i < size; i++){
        if (arr[i] == arr[i+1]){
            count ++;
            if (count > 1){
                frequently = arr[i];       
            }
        }
    }
return frequently;    
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
int result = findMostFrequentElement(arr,size);
cout << "The most frequent element in the array is " << result << endl;    

    
    
    
    
    
    return 0;
}