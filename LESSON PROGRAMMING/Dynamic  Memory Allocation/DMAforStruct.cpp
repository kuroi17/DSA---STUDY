#include <iostream>
using namespace std;
struct Student{
    char name[50];
    int age;
};

int main(){
int num;

cout << "Enter the number of students: ";
cin >> num;
cin.ignore();

Student* student = nullptr;

if (num > 0) {
  student = new Student[num]; // allocate memory if the num students is greater than 0
} else{
    cout << "Memory allocation failed " << endl;
}

if (student != nullptr){
    cout << "Enter details for " << num << " students: " << endl;
    for (int i = 0; i < num; i++){
        cout << "Student " << i+1 << " Name: ";
        cin.getline((student+i)-> name, 50);

        cout << "Student " << i+1 << " Age: ";
        cin >> (student+i)-> age;
        cin.ignore();
    }

cout << endl;
    cout << "Student details: " << endl;
    for (int i = 0; i < num; i++){
        cout << "Student " << i+1 << " Name: " << (student+i)->name << endl;
        cout << "Student " << i+1 << " Age: " << (student+i)->age << endl;
    }
    delete student; // deallocate memory
}
    return 0;
}