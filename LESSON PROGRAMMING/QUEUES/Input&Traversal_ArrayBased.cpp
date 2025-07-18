#include <iostream>
using namespace std;
#define MAX_SIZE 100

class Queue {
private:
	int data[MAX_SIZE];
	int front;
	int rear;

public:
	Queue() : front(0), rear(-1) {}

	void enqueue(int element) {
		if (rear == MAX_SIZE - 1) {
			std::cout << "Queue Overflow" << std::endl;
			return;
		}
		data[++rear] = element;
	}

	int dequeue() {
		if (front > rear) {
			std::cout << "Queue Underflow" << std::endl;
			return -1; // Return a sentinel value indicating error
		}
		return data[front++];
	}

	int peek() {
		if (front > rear) {
			std::cout << "Queue is empty" << std::endl;
			return -1; // Return a sentinel value indicating error
		}
		return data[front];
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