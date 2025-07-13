#include <iostream>
using namespace std;

// Define a node structure for Doubly Linked List
struct Node {
    int data;
    Node* next;
    Node* prev;
};

// Function to traverse the list forward
void traverseForward(Node* head) {
    Node* current = head;
    cout << "Forward Traversal: ";
    while (current != nullptr) {
        cout << current->data << " <-> ";
        current = current->next;
    }
    cout << "NULL" << endl;
}

// Function to traverse the list backward
void traverseBackward(Node* tail) {
    Node* current = tail;
    cout << "Backward Traversal: ";
    while (current != nullptr) {
        cout << current->data << " <-> ";
        current = current->prev;
    }
    cout << "NULL" << endl;
}

int main() {
    // Create nodes10,
    Node* first = new Node{ 10, nullptr, nullptr};
    Node* second = new Node{20, nullptr, nullptr};
    Node* third = new Node{30, nullptr, nullptr};

    // Linking nodes forward and backward
    first->next = second;
    second->prev = first; // nauna
    second->next = third; // kasunod
    third->prev = second; // nauna 

    // Traverse from head to tail
    traverseForward(first);

    // Traverse from tail to head
    traverseBackward(third);

    // Free memory
    delete first;
    delete second;
    delete third;

    return 0;
}

