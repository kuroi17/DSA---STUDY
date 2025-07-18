#include <iostream>
#include <string>
using namespace std;

// Define Stack class here directly
class Stack {
public:
    Stack() : head(nullptr), top(-1) {}
    ~Stack() {
        while (head != nullptr) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }

    void push(const string& item) {
        if (!isFull()) {
            Node* newNode = new Node{item, head};
            head = newNode;
            top++;
        }
    }

    string pop() {
        if (!isEmpty()) {
            Node* temp = head;
            string value = temp->value;
            head = head->next;
            delete temp;
            top--;
            return value;
        }
        return "";
    }

    string peek() const {
        if (!isEmpty()) {
            return head->value;
        }
        return "";
    }

    bool isFull() const {
        return top == maxSize - 1;
    }

    bool isEmpty() const {
        return top == -1;
    }

private:
    struct Node {
        string value;
        Node* next;
    };

    Node* head;
    int top;
    static const int maxSize = 100;
};

// Function to convert prefix to infix
string prefixToInfix(const string& expression) {
    Stack stack;
    int size = expression.length();

    // Loop from RIGHT to LEFT for prefix 
    for (int i = size - 1; i >= 0; i--) {
        char ch = expression[i]; // for every expression is equal to char ch

        if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '%' || ch == '^') {
            string operand1 = stack.pop();
            string operand2 = stack.pop();

            string newExpression = "(" + operand1 + ch + operand2 + ")";
            stack.push(newExpression); // Push the new expression back onto the stack
        } else {
            stack.push(string(1, ch)); // Push the operand (character) onto the stack
            // string constructor (count, variablename)
        }
    }

    return stack.pop(); // The final result will be the only item left in the stack
}

// Main function
int main() {
    string expression;

    cout << "Enter expression: ";
    getline(cin, expression);

    cout << prefixToInfix(expression) << endl;

    return 0;
}
