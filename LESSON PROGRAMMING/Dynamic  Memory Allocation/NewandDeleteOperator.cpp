#include <iostream>
using namespace std;
int main (){
int* dynamicInt = new int; // Dynamically allocate an integer

if (dynamicInt != nullptr){
    *dynamicInt = 42; // Assign a value to the dynamically allocated integer
    cout << "Dynamically allocated integer: " << *dynamicInt << endl; 
    delete dynamicInt; // Deallocate the memory
    
} 
else {    cout << "Memory allocation failed." << endl;    
    return 1; // Exit with an error code if allocation fails
}
    
return 0;
}