#include <iostream>
using namespace std;
int upper = 15;
int main (){

for (int i = 1 ; i < 16; i++){
    if (i % 15 == 0){
        cout << "Fizzbuzz\n";
    } else if (i % 3 == 0){
        cout << "Fizz\n";
    } else if (i % 5 == 0 ){
        cout << "Buzz\n";
    } else{
        cout << i << "\n";
    }
}


    return 0;
}