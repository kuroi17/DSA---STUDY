#include <iostream>
using namespace std;

struct Employee {
 int ID;
 char name[50];
 double salary;
};

int main (){
    Employee employee;


    int size;
    cout << "Enter the number of employees: ";
    cin >> size;

    Employee employees[size]; // Employee* employees = new Employee[size]; same with int* dynamicArray = new int[size];
    Employee* ptr = employees; 

    for (int i = 0; i < size; i++){
        cout << "Enter the ID of the employee: ";
        cin >> (ptr + i) -> ID;
        cin.ignore();
        cout << "Enter the name of the employee: ";
        cin.getline((ptr + i) -> name, 50);
        cout << "Enter the salary of the employee: ";
        cin >> (ptr + i) -> salary;
    }

    cout << "Employee Records: \n";
    for (int i = 0; i < size; i++){
        cout << "----------------------------" << endl;
        cout << "Employee " << i + 1 << endl;
        cout << "ID: " << (ptr + i) -> ID << endl;
        cout << "Name: " << (ptr + i) -> name << endl;
        cout << "Salary: " << (ptr + i) -> salary << endl;
        cout << "----------------------------" << endl;
        cout << endl;
    }



    return 0;
}