#include <iostream>
using namespace std;

float sum(int N){
    if (N == 1){
        return 1.0 / 10;
    }
    else{
        return (N / 10.0) + sum(N - 1); 
    }
}


int main (){

int N;
cout << "Enter the value of N: ";
cin >> N;

float result = sum(N);

printf("Sum: %.2f",result);
    
    
    return 0;
}