#include <iostream>
using namespace std;

struct Student {
    int ID;
    string name;
    double GPA;
};





int main (){

    Student student;

    int size;

    cout << "Enter the number of students: ";
    cin >> size;

    
    Student students[size]; // Student* students = new Student[size]; same with int* dynamicArray = new int [size];
    // same as Student* ptr = students

    for (int i = 0; i < size; i++){
        cout << "Enter ID of student: ";
        cin >> students[i].ID;
        cin.ignore();

        cout << "Enter the name of the student: ";
        getline(cin, students[i].name);

        cout << "Enter the GPA of the student: ";
        cin >> students[i].GPA;
    }
    cout << "Student Records:\n";
    for (int i = 0; i < size; i++){
        cout << "----------------------------" << endl;
        cout << "Student " << i+1 << endl;
        cout << "ID: " << students[i].ID << endl;
        cout << "Name: " << students[i].name << endl;
        cout << "GPA: " << students[i].GPA << endl;
        cout << "----------------------------" << endl;
        cout << endl;
    }




    return 0;
}