#include <iostream>
#include <string>
#include <cctype>
using namespace std;

#define MAX_SIZE 100

// Stack class using linked list
class Stack {
public:
    Stack() : head(nullptr), top(-1) {}
    ~Stack() {
        while (!isEmpty()) {
            pop();
        }
    }

    void push(int item) {
        if (top < MAX_SIZE - 1) {
            Node* newNode = new Node{item, head};
            head = newNode;
            top++;
        }
    }

    int pop() {
        if (!isEmpty()) {
            Node* temp = head;
            int value = temp->value;
            head = head->next;
            delete temp;
            top--;
            return value;
        }
        return 0; // Return 0 if empty (could be improved with error handling)
    }

    int peek() const {
        if (!isEmpty()) {
            return head->value;
        }
        return 0;
    }

    bool isEmpty() const {
        return head == nullptr;
    }

private:
    struct Node {
        int value;
        Node* next;
    };

    Node* head;
    int top;
};

// Function to evaluate postfix expression
int PostFixEvaluation(const string& expression) {
    Stack stack;
    string number = "";

    for (char ch : expression) {
        if (ch == ' ') {
            if (!number.empty()) {
                stack.push(stoi(number));
                number = "";
            }
            continue;
        }

        if (isdigit(ch)) {
            number += ch;
        }
        else if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '%') {
            int operand1 = stack.pop();
            int operand2 = stack.pop();
            int result = 0;

            if (ch == '+') result = operand2 + operand1;
            else if (ch == '-') result = operand2 - operand1;
            else if (ch == '*') result = operand2 * operand1;
            else if (ch == '/') result = operand2 / operand1;
            else if (ch == '%') result = operand2 % operand1;

            stack.push(result);
        }
    }

    if (!number.empty()) {
        stack.push(stoi(number));
    }

    return stack.pop();
}

// Main function
int main() {
    string expression;
    cout << "Enter expression: ";
    getline(cin, expression);

    int result = PostFixEvaluation(expression);
    cout << result << endl;

    return 0;
}
