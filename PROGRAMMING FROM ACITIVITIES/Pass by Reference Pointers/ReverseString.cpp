#include <iostream>
#include <cstring>
using namespace std;

void reverseString(char stringArr[100], int *len){
    *len = strlen(stringArr); 
    for ( int i = 0; i < *len / 2; i++ ){
        swap(stringArr[i], stringArr[*len - 1 - i]);
    }
        cout << "Reverse string: " << stringArr << endl;
}


int main (){
    
    char stringArr[20];
    
    cout << "Enter a string: ";
    cin.getline(stringArr,100);
    int len;    
reverseString(stringArr, &len);    
    
    
    
    
    
    
    
    return 0;
}