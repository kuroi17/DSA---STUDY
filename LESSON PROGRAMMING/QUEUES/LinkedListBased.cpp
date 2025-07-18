#include <iostream>

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

	queue.enqueue(1);
	queue.enqueue(2);
	queue.enqueue(3);

	std::cout << "Peek: " << queue.peek() << std::endl;
	std::cout << "Dequeue: " << queue.dequeue() << std::endl;
	std::cout << "Peek: " << queue.peek() << std::endl;

	return 0;
}