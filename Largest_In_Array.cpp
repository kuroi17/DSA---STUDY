#include <iostream>
using namespace std;
int main (){
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    int largest = arr[0];

    cout << "Enter an element:\n";
    for (int i = 0; i < size; i++ ){
        cin >> arr[i];
        if (arr[i] > largest){
          largest = arr[i];  
        }
    }

    cout << "The largest element is: " << largest;

    return 0;
}