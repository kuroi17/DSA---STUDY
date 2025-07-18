#include <iostream>
using namespace std;
class Node {
public:
	int data;
	Node* next;

	Node(int value) : data(value), next(nullptr) {}
};

class Queue {
private:
	Node* front;
	Node* rear;

public:
	Queue() : front(nullptr), rear(nullptr) {}

	void enqueue(int element) {
		Node* newNode = new Node(element);

		if (front == nullptr) {
			front = newNode;
			rear = newNode;
		} else {
			rear->next = newNode;
			rear = newNode;
		}
	}

	int dequeue() {
		if (front == nullptr) {
			std::cout << "Queue Underflow" << std::endl;
			return -1; // Return a sentinel value indicating error
		}

		Node* temp = front;
		int data = temp->data;

		front = front->next;

		if (front == nullptr) {
			rear = nullptr;
		}

		delete temp;
		return data;
	}

	int peek() {
		if (front == nullptr) {
			std::cout << "Queue is empty" << std::endl;
			return -1; // Return a sentinel value indicating error
		}
		return front->data;
	}
};

int main() {
	Queue queue;

	int size;
	cout << "Enter the size of the queue: ";
	cin >> size;

	for (int i = 0; i < size; i++) {
		int element;
		cout << "Enter element " << i + 1 << ": ";
		cin >> element;
		queue.enqueue(element);
	}
	for (int i = 0; i < size; i++) {
		cout << "Element at position " << i + 1 << ": " << queue.peek() << endl;
		queue.dequeue(); // Dequeue the element after peeking to avoid showing the same element again
	}

	return 0;
}