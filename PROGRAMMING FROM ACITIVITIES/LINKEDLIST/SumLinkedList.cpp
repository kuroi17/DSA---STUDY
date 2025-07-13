#include <iostream>
using namespace std;
struct Node{
    int value;
    Node* next;
};



double sumLinkedlist(Node* head){
    Node* current = head;
    double sum = 0.00;
    while (current != nullptr){
        sum+= current -> value;
        current = current -> next;
    }
    return sum;
}

void PrintLinkedlist(Node* head){
    Node* current = head;
    while (current != nullptr){
        cout << current -> value;
     if (current -> next != nullptr){
            cout << " -> ";
        }
        current = current -> next;
    }
}

int main (){

    Node* head = new Node;
    Node* second = new Node;
    Node* third = new Node;

    head -> value = 10;;
    head -> next = second;
    second -> value = 20;
    second -> next = third;
    third -> value = 30;
    third -> next = nullptr;

    cout << "Linked List: ";
    PrintLinkedlist(head);
    cout << endl;
    double summ = sumLinkedlist(head);
    cout << "Sum of Linked List: " << summ << endl;

    return 0;
}