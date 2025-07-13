#include <iostream>
using namespace std;

// Node structure
struct Node {
    int a;
    int b;
    Node* next;
};

// Function to create a new node (with a < b condition)
Node* createPairNode(int a, int b) {
    Node* node = new Node;
    node->a = a;
    node->b = b;

    if (node->a > node->b) {
        int temp = node->a;
        node->a = node->b;
        node->b = temp;
    }

    node->next = nullptr;
    return node;
}

// Function to add node at the front
void addFront(Node* head, Node* node) {
    node->next = head->next;
    head->next = node;
}

// Function to print the linked list
void printList(Node* node) {
    while (node != nullptr) {
        cout << "(" << node->a << ", " << node->b << ")";
        if (node->next != nullptr) {
            cout << " -> ";
        }
        node = node->next;
    }
    cout << endl;
}

// Main function
int main() {
    Node* linkedList = new Node; // dummy head node
    linkedList->next = nullptr;

    int n, a, b;

    cout << "Enter number of pairs: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter pair " << i + 1 << ":\n";
        cin >> a >> b;
        cout << "\n";

        addFront(linkedList, createPairNode(a, b));
    }

    printList(linkedList->next);

    // Free memory
    Node* nextNode = linkedList->next;
    while (linkedList != nullptr) {
        delete linkedList;
        linkedList = nextNode;
        if (nextNode != nullptr) {
            nextNode = nextNode->next;
        }
    }

    return 0;
}
