#include <iostream>
using namespace std;

void printEven(int rows, int columns, int arr[][100]){
    string space = ",";
    int largest = arr[0][0];
    
     for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            if (arr[i][j] > largest){
                largest = arr[i][j];                
            }

        }    
    }    
    
     for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            if(arr[i][j] % 2 == 0){
                if (arr[i][j] == largest){
                    cout << arr[i][j];
                    //break;
                }
                else{
                cout << arr[i][j] << ", ";
            }
            }
            
            
        }
     }
}     
    
    
    
 /*   
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            if (arr[i][j] % 2 == 0 && arr[i][j] != largest){
                //cout << arr[i][j];
                cout << arr[i][j] << space;
            }
        }
    }
}
*/


int main (){
int rows, columns;

cout << "Enter number of rows: ";
cin >> rows;

cout << "Enter number of columns: ";
cin >> columns;

int arr[100][100];
cout << "Enter the elements of the array:\n";
for (int i = 0; i < rows; i++){
    for (int j = 0; j < columns; j++){
        cin >> arr[i][j];
    }
}

 
cout << "Even Values:\n";
printEven(rows,columns, arr);   
    return 0;
}