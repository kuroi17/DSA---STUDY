#include <iostream>
using namespace std;

#define MAX_SIZE 100

class Stack {
private:
	int data[MAX_SIZE];
	int top;

public:
	Stack() {
		top = -1;
	}

	void push(int element) {
		if (top == MAX_SIZE - 1) {
			cout << "Stack Overflow" << endl;
			return;
		}
		data[++top] = element;
	}

	int pop() {
		if (top == -1) {
			cout << "Stack Underflow" << endl;
			return -1; // Return a sentinel value indicating error
		}
		return data[top--];
	}

	int peek() {
		if (top == -1) {
			cout << "Stack is empty" << endl;
			return -1; // Return a sentinel value indicating error
		}
		return data[top];
	}
};

int main() {
	Stack stack;

	stack.push(1);
	stack.push(2);
	stack.push(3);

	cout << "Peek: " << stack.peek() << endl;
	cout << "Pop: " << stack.pop() << endl;
	cout << "Peek: " << stack.peek() << endl;

	return 0;
}