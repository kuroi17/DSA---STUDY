#include <iostream>
using namespace std;

// 1. Define the structure for a doubly linked list node
// name the variable as "value"
struct Node {
    //string _______;          // TODO 1. Stores the value
    //Node* _______;           // TODO 2. Pointer to previous node
    //Node* _______;           // TODO 3. Pointer to next node
    string value;
    Node* next;
    Node* previous;
};

int main() {
    // 2. Declare node pointers
    //Node* head = _______;      // TODO 4. Initialize the head node.
    Node* head = nullptr;
    Node* second = nullptr;
    Node* third = nullptr;

    // 3. Allocate memory for each node
    //head = new _______;        // TODO 5. Create memory for head
    //second = _______ Node;     // TODO 6. Create memory for second
    //third = new _______;       // TODO 7. Create memory for third
    head = new Node;
    second = new Node;
    third = new Node;

    // 4. Assign values and connect nodes
    //head->value = _______;      // TODO 8. Assign first value
    //head->previous = _______;  // TODO 9. head has no previous
    //head->next = second;
    head -> value = "Rumi";
    head -> previous = nullptr;
    head -> next = second;

    second->value = "Mira";
    //second->previous = _______; // TODO 10. Link back to head
    //second->next = _______;     // TODO 11. Point to third
    
    second -> previous = head;
    second -> next = third;


    third->value = "Zoey";
    //third->previous = _______;  // TODO 12. Point to second
    //third->next = _______;      // TODO 13. Last node
    third -> previous = second;
    third -> next = nullptr;
    
    cout<<"TAKE IT DOWN, HUNTRIX!\n";

    // 5. Traverse and print the list
    //Node* current = _______;    // TODO 14. Start from head
    Node* current = head;
    while (current != nullptr) {
        //cout << current->_____;  // TODO 15. Print current node's value
        cout << current -> value;
        if (current->next != nullptr){
            cout<< " <=> ";
        }
        current = current->next;
    }
    delete head;
    delete second;
    delete third;
    return 0;
}