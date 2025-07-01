#include <iostream>
using namespace std;

int sumAtRange(int rows, int columns, float arr[][100], int start, int end){
    int sum = 0;
    for (int i = 0; i < rows; i++){
        for (int j = start; j < end; j++){
            sum+= arr[i][j];
        }
    }
    return sum;
}



int main (){

int rows, columns;    
    
    cout << "Enter number of rows: ";
    cin >> rows;
    
    cout << "Enter number of columns: ";
    cin >> columns;
    
    cout << "Enter the elements of the array:\n";
    float arr[100][100];
    
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            cin >> arr[i][j];
        }
    }
    int start, end;
    cout << "Enter start index: ";
    cin >> start;
    
    cout << "Enter end index: ";
    cin >> end;
    
    int result = sumAtRange(rows, columns, arr, start,end);
    cout << "Sum: " << result << endl;
    
    
    return 0;
}