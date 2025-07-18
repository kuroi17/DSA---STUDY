#include <iostream>

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

	queue.enqueue(1);
	queue.enqueue(2);
	queue.enqueue(3);

	std::cout << "Peek: " << queue.peek() << std::endl;
	std::cout << "Dequeue: " << queue.dequeue() << std::endl;
	std::cout << "Peek: " << queue.peek() << std::endl;

	return 0;
}