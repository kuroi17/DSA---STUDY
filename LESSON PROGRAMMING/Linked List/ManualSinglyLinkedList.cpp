#include <iostream>
using namespace std;

struct Node {
    int value;
    Node* next;
};

void printLinkedList(Node* node){
    Node* current = node;
    while (current != nullptr){
        if (current -> value == 0){
            current = current -> next;
            continue;
        }

        cout << current -> value;
        if (current -> next != nullptr){
            cout << " -> ";
        }
        current = current -> next;
    }
}

int main (){

// Create the head node
Node head;
head.value = 0;
head.next = nullptr;

// Declaring nodes manually    
Node node1, node2, node3, node4, node5;
node1.value = 5;
node1.next = nullptr;
node2.value = 3;
node2.next = nullptr;
node3.value = 22;
node3.next = nullptr;
node4.value = 100;
node4.next = nullptr;
node5.value = -10;
node5.next = nullptr;

// Link the nodes together
head.next = &node1;
node1.next = &node2;
node2.next = &node3;
node3.next = &node4;
node4.next = &node5;

printLinkedList(&head);


    return 0;
}