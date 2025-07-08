#include <iostream>
using namespace std;

struct Employee{
    int id;
    char name[50];
    double salary;
};

int main (){
    int size;
    cout << "Enter the number of employees: ";
    cin >> size;

     Employee* employee = new Employee[size]; // Allocate
     // Employee* ptr = employee; // same as Employee employee[size];
     if (employee!= nullptr){ // check if memory allocation was successful
        for (int i = 0; i< size; i++){
            cout << "Enter the id of employee: ";
            cin >> (employee + i) -> id;
            cin.ignore();
            cout << "Enter the name of employee: ";
            cin.getline((employee + i) -> name, 50);
            cout << "Enter the salary of employee: ";
            cin >> (employee + i) -> salary;
            cout << endl;
        }

        for (int i = 0; i < size; i++){
            cout << "----------------------------" << endl;
            cout << "Employee " << i + 1 << endl;
            cout << "ID: " << (employee + i) -> id << endl;
            cout << "Name: " << (employee + i) -> name << endl;
            cout << "Salary: " << (employee + i) -> salary << endl;
            cout << "----------------------------" << endl;
            cout << endl;
        }
        delete employee; // Deallocate the memory
     }

    return 0;
}