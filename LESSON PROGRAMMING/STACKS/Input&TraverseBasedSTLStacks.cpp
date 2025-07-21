#include <iostream>
#include <stack> // STL stack
using namespace std;

int main() {
	stack<int> myStack;

	int size;
	cout << "Enter the size of the stack: ";
	cin >> size;

	for (int i = 0; i < size; i++) {
		int element;
		cout << "Enter element " << i + 1 << ": ";
		cin >> element;
		myStack.push(element);
	}

	// Displaying and popping the elements
	for (int i = 0; i < size; i++) {
		if (!myStack.empty()) {
			cout << "Element at position " << i + 1 << ": " << myStack.top() << endl;
			myStack.pop(); // Remove the element after showing
		} else {
			cout << "Stack is empty" << endl;
		}
	}

	return 0;
}
