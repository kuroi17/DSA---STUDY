#include <iostream>
using namespace std;

struct Person {
  char name[50];
  int age;
    
};

int main (){
    // Person person_1, person_2, person_3;
    Person people[100]; // Array to hold multiple Person objects
    
    int size;
    
    cout << "Enter the number of people: ";
    cin >> size;
   
   
   for (int i = 0; i < size; i++){
       cout << "Enter name of person " << i+1 <<": ";
       cin >> people[i].name;
       cout << "Enter age of person " << i+1 << ": ";
       cin >> people[i].age;
   }
    int sum = 0;
    for (int i = 0; i < size; i++){
     sum += people[i].age;
    }
    int average = sum / size;
    
    
    cout << " The average age of the people is " << average << endl;
    
    
    
    
    return 0;
}