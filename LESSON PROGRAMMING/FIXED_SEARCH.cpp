#include <iostream>
using namespace std;

void searchAll(int arr[], int size, int key) {
    bool found = false;
    cout << "Key found at index(es): ";
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            cout << i << " ";
            found = true;
        }
    }
    if (!found) {
        cout << "Key not found in the array.";
    }
    cout << endl;
}

int main() {
    int size, key;
    cout << "Enter number of elements: ";
    cin >> size;

    int arr[size];
    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Enter the element to search: ";
    cin >> key;

    searchAll(arr, size, key);

    cout << "Array elements:\n";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
