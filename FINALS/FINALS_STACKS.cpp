#include <iostream>
using namespace std;

#define MAX_SIZE 100

class Stack {
private:
    int top;
    int data[MAX_SIZE];  // Use int instead of char for binary digits (0 or 1)

public:
    Stack() {
        top = -1;
    }

    bool isFull() {
        return top == MAX_SIZE - 1;
    }

    bool isEmpty() {
        return top == -1;
    }

    void push(int element) {
        if (isFull()) {
            cout << "Stack is full!";
            return;
        }
        data[++top] = element;
    }

    int pop() {
        if (isEmpty()) {
            cout << "Stack is empty!";
            return -1;
        }
        return data[top--];
    }

    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty!";
            return -1;
        }
        return data[top];
    }
};

int main() {
Stack binary;

int num;
cout << "Enter positive number: ";
cin >> num;

if (num == 0) cout << "Binary: 0" << endl;

while (num > 0){
    binary.push(num % 2);
    num /= 2;
}

cout << "The converted bits is: ";
while (!binary.isEmpty()){
    cout << binary.pop() << " ";
}


return 0;
}