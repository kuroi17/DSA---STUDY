#include <iostream>
#include <string>
using namespace std;

struct Student {
    char name[50];
    int rollNumber;
    int marks[5];
    int totalMarks = 0;
};


int main (){
   Student student_1;
   
   cout << "Enter student details:\n";
   cout << "Name: ";
  cin.getline(student_1.name, 50);
   cout << "Roll Number: ";
   cin >> student_1.rollNumber;
   cout << "Enter marks for 5 subjects: \n";
   for (int i = 0; i < 5; i++){
       cout << "Subject " << i+1 << ": ";
       cin >> student_1.marks[i];
   };
    
    for (int i = 0; i < 5; i++){
        student_1.totalMarks += student_1.marks[i];
    }
    cout << endl;
    
    cout << "Student details: " << endl;
    cout << "Name: " << student_1.name << endl;
    cout << "Roll Number: " << student_1.rollNumber << endl;
    cout << "Marks:\n";
    
    for (int i = 0; i < 5; i++){
        cout << "Subject " << i+1 <<": " << student_1.marks[i] << endl;
    }
    cout << "Total Marks: " << student_1.totalMarks << endl;
    
    
    
    return 0;
}