#include <iostream>
using namespace std;

 int sumFibonacci(int n){
    if (n <= 0){
        return 1;
    }
    else{
    return sumFibonacci(n-1) + sumFibonacci(n-2);
    
        
    }
}

int main (){
int n;
cout << "Enter the value of n: ";
cin >> n;

int result;
result = sumFibonacci(n) - 1;

cout << "Sum of the first " << n << " Fibonacci numbers is " << result << "."<<endl;
    
    
    
    return 0;
}