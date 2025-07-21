#include <iostream>
#include <queue> // STL queue
using namespace std;

int main() {
	queue<int> myQueue; // Using STL queue

	int size;
	cout << "Enter the size of the queue: ";
	cin >> size;

	// Enqueue elements
	for (int i = 0; i < size; i++) {
		int element;
		cout << "Enter element " << i + 1 << ": ";
		cin >> element;
		myQueue.push(element); // enqueue
	}

	// Dequeue and print elements
	for (int i = 0; i < size; i++) {
		if (!myQueue.empty()) {
			cout << "Element at position " << i + 1 << ": " << myQueue.front() << endl;
			myQueue.pop(); // dequeue
		} else {
			cout << "Queue is empty" << endl;
		}
	}

	return 0;
}
