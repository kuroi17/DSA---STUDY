#include <iostream>
#include <string>
using namespace std;

class Stack {
public:
    Stack() : head(nullptr) {}
    ~Stack() {
        while (!isEmpty()) {
            pop();
        }
    }

    void push(char item) {
        Node* newNode = new Node{item, head};
        head = newNode;
    }

    char pop() {
        if (isEmpty()) return '\0';
        Node* temp = head;
        char value = temp->value;
        head = head->next;
        delete temp;
        return value;
    }

    char peek() const {
        if (isEmpty()) return '\0';
        return head->value;
    }

    bool isEmpty() const {
        return head == nullptr;
    }

private:
    struct Node {
        char value;
        Node* next;
    };

    Node* head;
};

bool balanceChecker(const string& expression){
    Stack stack;

    for (char ch : expression) {
        if (ch == '(' || ch == '{' || ch == '[') {
            stack.push(ch);
        }
        else if (ch == ')' || ch == '}' || ch == ']') {
            if (stack.isEmpty()) return false;

            char top = stack.peek();
            if ((ch == ')' && top != '(') ||
                (ch == ']' && top != '[') ||
                (ch == '}' && top != '{')) {
                return false;
            }

            stack.pop();
        }
    }

    return stack.isEmpty();
}

int main() {
    string expression;
    cin >> expression;

    cout << (balanceChecker(expression) ? "True" : "False") << endl;

    return 0;
}
