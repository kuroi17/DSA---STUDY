#include <iostream>
using namespace std;

int main (){

    int rows, columns;

    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> columns;

    int matrix[rows][columns];

    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            cin >> matrix[i][j];
        }
    }
    cout << endl;

    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Sum of each rows:\n";
    
    for (int i = 0; i < rows; i++){
        int Rowsum = 0;
        for (int j = 0; j < columns; j++){
            Rowsum+= matrix[i][j];
        }
        cout << "Row " << i+1 << ": " << Rowsum << endl;
    }
    cout << endl;
    
    cout << "Sum of each columns:\n";
   
    for (int j = 0; j < columns; j++){
         int Colsum = 0;
        for (int i = 0; i < rows; i++){
            Colsum+= matrix[i][j];
        }
        cout << "columns " << j+1 << ": " << Colsum << endl;
    }




    return 0;
}