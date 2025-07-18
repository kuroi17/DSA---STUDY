#include <iostream>
using namespace std;

#define MAX_SIZE 100

// ----------------- Structures -----------------

struct Node {
    int value;
    Node* next;
};

struct Queue {
    int count;
    Node* rear;
    Node* front;
    double sum;
};

// ----------------- Function Prototypes -----------------

Queue* createEmptyQueue();
bool isFull(Queue* queue);
bool isEmpty(Queue* queue);
void enqueue(Queue* queue, int item);
int dequeue(Queue* queue);
void printQueue(Queue* queue);

// ----------------- Queue Function Definitions -----------------

Queue* createEmptyQueue() {
    Queue* queue = new Queue;
    queue->count = 0;
    queue->rear = nullptr;
    queue->front = nullptr;
    queue->sum = 0;
    return queue;
}

bool isFull(Queue* queue) {
    return queue->count == MAX_SIZE;
}

bool isEmpty(Queue* queue) {
    return queue->count == 0;
}

void enqueue(Queue* queue, int item) {
    if (!isFull(queue)) {
        Node* newItem = new Node;
        newItem->value = item;
        newItem->next = nullptr;

        if (queue->rear != nullptr) {
            queue->rear->next = newItem;
        }

        queue->rear = newItem;
        queue->sum += item;
        queue->count++;

        if (queue->front == nullptr) {
            queue->front = newItem;
        }
    }
}

int dequeue(Queue* queue) {
    if (!isEmpty(queue)) {
        Node* firstItem = queue->front;
        int dequeuedValue = firstItem->value;

        queue->front = firstItem->next;
        queue->sum -= dequeuedValue;
        queue->count--;

        if (queue->front == nullptr) {
            queue->rear = nullptr;
        }

        delete firstItem;
        return dequeuedValue;
    }
    return 0;
}

void printQueue(Queue* queue) {
    Node* temp = queue->front;
    while (temp != nullptr) {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << "\n";
}

// ----------------- Main Function -----------------

int main() {
    Queue* queue = createEmptyQueue();
    int num;
    char operations;

    cout << "Enter operations:\n";    
    while (true) {
        cin >> operations;
        if (operations == '#') break;

        if (operations == '+') {
            cin >> num;
            if (!isFull(queue)) {
                enqueue(queue, num);
            } else {
                cout << "Queue overflow! ";
            }
        } else if (operations == '-') {
            if (!isEmpty(queue)) {
                dequeue(queue);
            } else {
                cout << "Queue underflow! ";
            }
        }
    }

    // -------- Remove by Key --------
    int key;
    cout << "Enter number to remove from the queue: ";
    cin >> key;

    Queue* newQueue = createEmptyQueue();

    while (!isEmpty(queue)) {
        int val = dequeue(queue);
        if (val != key) {
            enqueue(newQueue, val);
        }
    }

    // Copy back to original queue
    while (!isEmpty(newQueue)) {
        int val = dequeue(newQueue);
        enqueue(queue, val);
    }

    // -------- Output --------
    cout << "Queue after removal: ";
    printQueue(queue);

    // -------- Running Average --------
    double sum = 0;
    int count = 0;
    cout << "Running Averages:\n";
    for (Node* current = queue->front; current != nullptr; current = current->next) {
        sum += current->value;
        count++;
        double avg = sum / count;
        printf("After %d element(s): %.2f\n", count, avg);
    }

    return 0;
}
