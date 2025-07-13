#include <iostream>
using namespace std;

class Node {
public: // Node structure for linked list, para syang similar sa Employee structure or STRUCT sa example
	// sa Dynamic Memory Allocation lesson
	// pero dito, ginagamit natin sya para sa stack implementation
	// instead of storing employee data, we store integer data
	// and a pointer to the next node in the stack
	int data; 
	Node* next;

	Node(int value) { // Constructor to initialize the node with a value
	// as well as the next pointer points to nullptr kasi wala pang address ng next node or similar sa -1 sa array implementation
		data = value;
		next = nullptr;
	}
};

class Stack { // Stack class that uses a linked list to implement stack operations
	// This class contains a pointer to the top node of the stack
	// and methods to push, pop, and peek at the stack
private: // Pointer to the top of the stack
	// This is similar to the top of the stack in array implementation
	// but here, we use a pointer to the top node of the linked list
	Node* top;

public: // Constructor to initialize the stack
	// This constructor initializes the top pointer to nullptr, indicating an empty stack
	// This is similar to initializing the top index to -1 in array implementation
	Stack() {
		top = nullptr;
	}

	void push(int element) { // Method to push an element onto the stack
		Node* newNode = new Node(element); // Create a new node with the given element
		newNode->next = top; // set the next of the node to the current top
		top = newNode; // Update the top pointer to the new node
	}

	int pop() {
		if (top == nullptr) { // checks if the stack is empty same as checking if top index is -1 in array implementation
			cout << "Stack Underflow" << endl;
			return -1; // Return a sentinel value indicating error
		}
		Node* temp = top; // gumawa ng temporary pointer to the top node
		// This is similar to storing the top index in a variable in array implementation
		int data = temp->data; // inassign natin ang data ng top node sa data variable
		top = temp->next; // Update the top pointer to the next node
		// This is similar to decrementing the top index in array implementation
		delete temp; 
		return data; // same as returning ang ipopop na value
	}

	int peek() {
		if (top == nullptr) {
			cout << "Stack is empty" << endl;
			return -1; // Return a sentinel value indicating error
		}
		return top->data;
	}
};

int main() {
	Stack stack;

	stack.push(1); // same as pushing elements onto the stack
	// in array implementation, we just increment the top index
	stack.push(2); // and push the next element
	stack.push(3); // and so on

	cout << "Peek: " << stack.peek() << endl;
	cout << "Pop: " << stack.pop() << endl;
	cout << "Peek: " << stack.peek() << endl;

	return 0;
}