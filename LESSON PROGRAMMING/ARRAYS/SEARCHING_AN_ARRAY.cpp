#include <iostream>
using namespace std;


int search(int arr[], int size, int key){
    for (int i = 0; i < size; i++){
        if (arr[i] == key){
            return i; // Return the index if found
        }
    }
    return -1; // Return -1 if not found
}
int main (){
int size, key;
cout << "Enter number of elements: ";
cin >> size;

int arr[size];
cout << "Enter " << size << " elements:\n";
for (int i = 0; i < size; i++){
    cin >> arr[i];
}

cout << "Enter the element to search: ";
cin >> key;

int result = search(arr, size, key);
if (result != -1) {
    cout << "Element found at index: " << result << endl;
} else {
    cout << "Element not found in the array." << endl;
}

cout << "Array elements:\n";
for (int i = 0; i < size; i++){
    cout << arr[i] << " ";       

}




    return 0;
}