#include <iostream>
using namespace std;

#define MAX_SIZE 100

class Stack {
private:
	int data[MAX_SIZE];
	int top;

public:
	Stack() {
		top = -1; // -1 MEANS NASA UNAHAN NG ELEMENT ZERO ANG STACK, WALA PANG NAKA-PUSH NA ELEMENT KASI DIBA FIRST ELEMENT IS AT INDEX 0
	}

	void push(int element) {
		if (top == MAX_SIZE - 1) {
			cout << "Stack Overflow" << endl; // iF TOP IS EQUAL SA MAX_SIZE - 1, STACK IS FULL
			return;
		}
		data[++top] = element; // Increment top and then assign the element
		// ++top means increment top first before assigning the element
	}

	int pop() {
		if (top == -1) { // PAG TOP IS EQUAL TO -1,EMPTY ANG STACK
			cout << "Stack Underflow" << endl;
			return -1; // Return a sentinel value indicating error
		}
		return data[top--]; // ipapakita muna yung element na aalisin then decrement top
		// top -- means next increment pa matututok sa next element
	}

	int peek() {
		if (top == -1) { // SAME LANG, CHECKING MUNA IF EMPTY KASI IF EMPTY DIBA WALA TAYONG MAKIKITA NA ELEMENT
			cout << "Stack is empty" << endl;
			return -1; // Return a sentinel value indicating error
		}
		return data[top]; // Return the top element without removing it
	}
};

int main() {
	Stack stack;

	stack.push(1); // match sa function parameter na int element
	stack.push(2); // push elements to the stack
	stack.push(3); // push more elements

	cout << "Peek: " << stack.peek() << endl; // Peek at the top element without removing it
	cout << "Pop: " << stack.pop() << endl; 	// Pop the top element from the stack. output is 3
	cout << "Peek: " << stack.peek() << endl; // peek then output is 2

	return 0;
}