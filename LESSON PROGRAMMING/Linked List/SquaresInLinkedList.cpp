#include <iostream>
#include <cmath>
using namespace std;


struct Node{
    int value;
    Node* next;
};

void printSquaredValues(Node* node){
    Node* current = node;
    
    while (current != nullptr){
        if (current -> value == 0){
            current = current -> next;
            continue;
        }
        cout << pow(current -> value, 2);

         if (current -> next != nullptr){
            cout << " -> ";
        }    
          current = current -> next;
    }

}



int main (){
Node head;
head.value = 0;
head.next = nullptr;

Node node1, node2, node3, node4, node5;

node1.value = 10;
node2.value = 20;
node3.value = 30;
node4.value = 40;
node5.value = 50;

node1.next = nullptr;
node2.next = nullptr;
node3.next = nullptr;
node4.next = nullptr;
node5.next = nullptr;

head.next = &node1;
node1.next = &node2;
node2.next = &node3;
node3.next = &node4;
node4.next = &node5;

printSquaredValues(&head);


    return 0;
}