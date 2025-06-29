#include <iostream>
using namespace std;

int countOccurrences(int arr[], int size, int N){
    int count = 0;
    for (int i = 0; i < size; i++){
        if (arr[i] == N){
            count ++;
        }
    }
    return count;
}

int main (){
    
    
    int size, N;
    
    cout << "Enter the size of the array: ";
    cin >>size;
    int arr[size];
    
    cout << "Enter the elements of the array:\n";
    
    for (int i = 0; i < size; i++){
        cin >> arr[i];
    }
    cout << "Enter the integer N to count its occurrences: ";
    cin >> N;
    int result = countOccurrences(arr ,size ,N);
    cout << "The number of occurrences of " << N << " in the array is: " << result << endl;
    
return 0;    
}