#include <iostream>
#include <cmath>
using namespace std;

struct Person {
  char name[50];
  float age;
    
};

int main (){
   
    
    int size;
    
    cout << "Enter the number of people: ";
    cin >> size;
   
    Person people[size];
   
   for (int i = 0; i < size; i++){
       cout << "Enter name of person " << i+1 <<": ";
       cin >> people[i].name;
       cout << "Enter age of person " << i+1 << ": ";
       cin >> people[i].age;
   }
    double sum = 0;
    for (int i = 0; i < size; i++){
     sum += people[i].age;
    }
    float average = sum / size;
    
    
    cout << "The average age of the people is " << round(average) << endl;
    
    
    
    
    return 0;
}