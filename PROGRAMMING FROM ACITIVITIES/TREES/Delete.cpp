#include <iostream>

struct Node {
    int value;
    Node* left;
    Node* right;
};

Node* createNode(int value) {
    Node* node = new Node;
    node->value = value;
    node->left = nullptr;
    node->right = nullptr;
    return node;
}

void displayTree(Node* node) {
    if (node != nullptr) {
        displayTree(node->left);
        std::cout << node->value << " ";
        displayTree(node->right);
    }
}

Node* insert(Node* node, int value) {
    if (node == nullptr) return createNode(value);

    if (value < node->value) {
        node->left = insert(node->left, value);
    } else if (value > node->value) {
        node->right = insert(node->right, value);
    }
    // Duplicate values are ignored
    return node;
}

Node* findMinimumValue(Node* node) {
    while (node->left != nullptr) {
        node = node->left;
    }
    return node;
}

Node* deleteNode(Node* node, int value) {
    if (node == nullptr) return nullptr;

    if (value < node->value) {
        node->left = deleteNode(node->left, value);
    } else if (value > node->value) {
        node->right = deleteNode(node->right, value);
    } else {
        // Node with only one child or no child
        if (node->left == nullptr) {
            Node* temp = node->right;
            delete node;
            return temp;
        } else if (node->right == nullptr) {
            Node* temp = node->left;
            delete node;
            return temp;
        }

        // Node with two children
        Node* successor = findMinimumValue(node->right);
        node->value = successor->value;
        node->right = deleteNode(node->right, successor->value);
    }
    return node;
}

int main() {
    std::cout << "Enter test case number (1 or 2): ";
    int testCase;
    std::cin >> testCase;

    Node* root = nullptr;

    switch (testCase) {
        case 1:
            root = insert(root, 3);
            root = insert(root, 5);
            root = insert(root, 8);
            root = insert(root, 1);
            root = insert(root, 6);
            root = insert(root, 4);
            root = insert(root, 7);
            root = insert(root, 8); // Duplicate will be ignored

            std::cout << "Elements of the first tree:\n";
            displayTree(root);

            root = deleteNode(root, 8);
            std::cout << "\nAfter deleting 8 from the first tree:\n";
            displayTree(root);
            break;

        case 2:
            root = insert(root, 10);
            root = insert(root, 8);
            root = insert(root, -1);
            root = insert(root, 3);
            root = insert(root, 12);
            root = insert(root, 55);
            root = insert(root, 2);
            root = insert(root, 100);

            std::cout << "Elements of the second tree:\n";
            displayTree(root);

            root = deleteNode(root, 100);
            std::cout << "\nAfter deleting 100 from the second tree:\n";
            displayTree(root);
            break;

        default:
            std::cout << "Invalid test case number.\n";
            break;
    }

    return 0;
}
