#include <iostream>
using namespace std;

#define MAX_SIZE 10 


int main (){
string arr[MAX_SIZE];

int Numitems;

cout << "How many items? ";
cin >> Numitems;
cin.ignore();

for (int i = 0; i < Numitems; i++){
    cout << "Enter item " << i + 1 << ": ";
    getline(cin, arr[i]);
    cout << "Current Basket:\n";
    for (int j = 0; j <= i; j++){
        cout << j + 1 << ": " << arr[j] << endl;
    }

    
}


    return 0;
}