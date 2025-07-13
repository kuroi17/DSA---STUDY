#include <iostream>
using namespace std;

// Define the Node struct
struct Node {
    int value;
    Node* next;
};

// Function to print the linked list
void printList(Node* node) {
    Node* current = node;
    while (current != nullptr) {
        cout << current->value;
        if (current->next != nullptr) {
            cout << " -> ";
        }
        current = current->next;
    }
    cout << endl;
}

// Function to add a node at the end
Node* addNode(Node* node, int value) {
    Node* current = node;
    while (current->next != nullptr) {
        current = current->next;
    }

    Node* newNode = new Node;
    newNode->value = value;
    newNode->next = nullptr;

    current->next = newNode;
    return newNode;
}

// Function to insert a node at a specific position
void insertAtPos(Node* linkedList, int newValue, int pos) {
    int index = 0;
    Node* current = linkedList;

    while (current != nullptr && index < pos) {
        current = current->next;
        index++;
    }

    if (current == nullptr) {
        cout << "Invalid position. Cannot insert." << endl;
        return;
    }

    Node* newNode = new Node;
    newNode->value = newValue;
    newNode->next = current->next;
    current->next = newNode;
}

// Function to delete a node at a specific position
void deleteAtPos(Node* linkedList, int pos) {
    Node* current = linkedList;
    int index = 0;

    while (current != nullptr && index < pos) {
        current = current->next;
        index++;
    }

    if (current != nullptr && current->next != nullptr) {
        Node* temp = current->next;
        current->next = temp->next;
        delete temp;
    } else {
        cout << "Invalid position. Cannot delete." << endl;
    }
}

// Main program
int main() {
    Node* linkedList = new Node;
    linkedList->next = nullptr; // dummy head's next is initially null

    Node* node1 = addNode(linkedList, 5);
    Node* node2 = addNode(node1, 3);
    Node* node3 = addNode(node2, 22);
    Node* node4 = addNode(node3, 100);
    Node* node5 = addNode(node4, -10);
    Node* node6 = addNode(node5, 55);
    Node* node7 = addNode(node6, -7);

    cout << "Original linked list:" << endl;
    printList(linkedList->next);
    cout << endl;

    int num1, num2, pos, posToDelete;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter position: ";
    cin >> pos;
    cout << "Enter position to delete: ";
    cin >> posToDelete;

    deleteAtPos(linkedList, posToDelete);
    insertAtPos(linkedList, num1, pos);
    insertAtPos(linkedList, num2, pos);

    cout << "Updated linked list:" << endl;
    printList(linkedList->next);

    return 0;
}
