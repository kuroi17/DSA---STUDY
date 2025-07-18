#include <iostream>
using namespace std;

#define MAX_SIZE 100

// Node structure
struct Node {
    int value;
    int priority;
    Node* next;
};

// Priority Queue structure
struct PriorityQueue {
    int count;
    Node* front;
};

// Function prototypes
PriorityQueue* createEmptyPriorityQueue();
bool isFull(PriorityQueue* priorityQueue);
bool isEmpty(PriorityQueue* priorityQueue);
void enqueue(PriorityQueue* priorityQueue, int value, int priority);
int dequeue(PriorityQueue* priorityQueue);
void printPriorityQueue(PriorityQueue* priorityQueue);

// Function implementations
PriorityQueue* createEmptyPriorityQueue() {
    PriorityQueue* priorityQueue = new PriorityQueue;
    priorityQueue->count = 0;
    priorityQueue->front = nullptr;
    return priorityQueue;
}

bool isFull(PriorityQueue* priorityQueue) {
    return priorityQueue->count == MAX_SIZE;
}

bool isEmpty(PriorityQueue* priorityQueue) {
    return priorityQueue->count == 0;
}

void enqueue(PriorityQueue* priorityQueue, int value, int priority) {
    if (!isFull(priorityQueue)) {
        Node* newNode = new Node;
        newNode->value = value;
        newNode->priority = priority;
        newNode->next = nullptr;

        if (isEmpty(priorityQueue) || priority > priorityQueue->front->priority) {
            newNode->next = priorityQueue->front;
            priorityQueue->front = newNode;
        } else {
            Node* current = priorityQueue->front;
            while (current->next != nullptr && current->next->priority >= priority) {
                current = current->next;
            }
            newNode->next = current->next;
            current->next = newNode;
        }
        priorityQueue->count++;
    }
}

int dequeue(PriorityQueue* priorityQueue) {
    if (!isEmpty(priorityQueue)) {
        Node* firstItem = priorityQueue->front;
        int dequeuedValue = firstItem->value;

        priorityQueue->front = firstItem->next;
        priorityQueue->count--;

        delete firstItem;
        return dequeuedValue;
    }
    return 0;
}

void printPriorityQueue(PriorityQueue* priorityQueue) {
    Node* temp = priorityQueue->front;
    while (temp != nullptr) {
        cout << temp->value << "(" << temp->priority << ") ";
        temp = temp->next;
    }
    cout << "\n";
}

// Main function
int main() {
    PriorityQueue* priorityQueue = createEmptyPriorityQueue();
    
    cout << "Enter operations:\n";
    int value, priority;
    char expression;
    while (true) {
        cin >> expression;
        if (expression == '#') break;
        
        if (expression == '+') {
            cin >> value >> priority;
            if (!isFull(priorityQueue)) {
                enqueue(priorityQueue, value, priority);
            } else {
                cout << "Queue is full! ";
            }
        } else if (expression == '-') {
            if (!isEmpty(priorityQueue)) {
                dequeue(priorityQueue);
            } else {
                cout << "Queue is empty! ";
            }
        }
    }
    
    int keyPriority;
    cout << "Enter priority to remove: ";
    cin >> keyPriority;
    
    // Remove nodes with matching priority
    PriorityQueue* newQueue = createEmptyPriorityQueue();
    while (!isEmpty(priorityQueue)) {
        Node* frontNode = priorityQueue->front;
        int val = frontNode->value;
        int prio = frontNode->priority;
        dequeue(priorityQueue);

        if (prio != keyPriority) {
            enqueue(newQueue, val, prio);
        }
    }

    // Copy back to original queue
    while (!isEmpty(newQueue)) {
        Node* frontNode = newQueue->front;
        int val = frontNode->value;
        int prio = frontNode->priority;
        dequeue(newQueue);

        enqueue(priorityQueue, val, prio);
    }

    // Print final result
    for (Node* current = priorityQueue->front; current != nullptr; current = current->next) {
        cout << "Value: " << current->value << ", Priority: " << current->priority << endl;
    }

    return 0;
}
