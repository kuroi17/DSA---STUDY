#include <iostream>
using namespace std;
struct Node{
    int value;
    Node* next;
};

int main (){
Node* node1 = new Node{5, nullptr};
Node* node2 = new Node{3, nullptr};
Node* node3 = new Node{22, nullptr};
Node* node4 = new Node{100, nullptr};
Node* node5 = new Node{-10, nullptr};

node1 -> next = node2;
node2 -> next = node3;
node3 -> next = node4;
node4 -> next = node5;


Node* current = node1;

while (current != nullptr){
    cout << current -> value;
     if (current -> next != nullptr){
        cout << " -> ";
    }
    current = current -> next;
}

    return 0;
}
