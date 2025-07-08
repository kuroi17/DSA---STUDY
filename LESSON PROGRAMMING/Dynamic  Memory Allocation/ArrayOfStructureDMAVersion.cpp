#include <iostream>
using namespace std;
struct Student{
    int id;
    char name[50];
    double GPA;
};

int main (){

    int size;
    cout << "Enter the number of students: ";
    cin >> size;

    Student* student = new Student[size]; // allocate memory for an array of Student structures
    // Student students[size]; // same as Student* student = new Student[size];
    if (student != nullptr){
        for (int i = 0; i < size; i++){
            cout << "Enter the ID of student: ";
            cin >> student[i].id;
            cin.ignore();
            cout << "Enter the name of student: ";
            cin.getline(student[i].name, 50);
            cout << "Enter the GPA of student: ";
            cin >> student[i].GPA;
            cout << endl;
        }
        
        cout << "Student Records:\n";
        for (int i = 0; i < size; i++){
            cout << "---------------------" << endl;
            cout << "Student " << i + 1 << endl;
            cout << "Id: " << student[i].id << endl;
            cout << "Name: " << student[i].name << endl;
            cout << "GPA: " << student[i].GPA << endl;
            cout << "---------------------" << endl;
            cout << endl;
        }   






        delete [] student; // deallocate;
    }
    return 0;
}