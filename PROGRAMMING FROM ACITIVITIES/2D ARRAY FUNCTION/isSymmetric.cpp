#include <iostream>
using namespace std;

bool isSymmetric(int arr[100][100], int N){
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            if (arr[i][j] != arr[j][i]){
                return false;
            }
        }
    }
    return true;
}


int main (){

int N;

cout << "Enter the size of the square array: ";
cin >> N;
int arr[100][100];
cout << "Enter the elements of the array:\n";

for (int i = 0; i < N; i++){
    for (int j = 0; j < N; j++){
        cin >> arr[i][j];
    }
}

bool result = isSymmetric(arr,N);
if (result){
    cout << "The array is symmetric." << endl;
} else {
    cout << "The array is not symmetric." << endl;  
}
    
    
    
    return 0;
}