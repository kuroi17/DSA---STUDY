#include <iostream>
using namespace std;

// Define node structure
struct Node {
    int data;
    Node* next;
};

int main() {
    // Create 3 nodes
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    // Assign data
    head->data = 1;
    second->data = 2;
    third->data = 3;

    // Link the nodes
    head->next = second;
    second->next = third;
    third->next = head; // Make it circular

    // Traverse and display
    Node* temp = head;
    do {
        cout << temp->data << " -> ";
        temp = temp->next;
    } while (temp != head);
    cout << "(back to head)" << endl;

    // Free memory
    delete head;
    delete second;
    delete third;

    return 0;
}