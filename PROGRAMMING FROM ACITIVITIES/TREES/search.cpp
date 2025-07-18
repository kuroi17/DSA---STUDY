#include <iostream>

struct Node {
    int value;
    Node* left;
    Node* right;
};

// Function to create a new node
Node* createNode(int value) {
    Node* node = new Node;
    node->value = value;
    node->left = nullptr;
    node->right = nullptr;
    return node;
}

// Insert using BST logic
Node* insert(Node* node, int value) {
    if (node == nullptr) return createNode(value);

    if (value < node->value) {
        node->left = insert(node->left, value);
    } else if (value > node->value) {
        node->right = insert(node->right, value);
    }
    // If value already exists, do nothing (ignore duplicates)
    return node;
}

// In-order traversal
void displayTree(Node* node) {
    if (node != nullptr) {
        displayTree(node->left);
        std::cout << node->value << " ";
        displayTree(node->right);
    }
}

// Search in BST
Node* search(Node* node, int value) {
    while (node != nullptr && node->value != value) {
        if (value < node->value) {
            node = node->left;
        } else {
            node = node->right;
        }
    }
    return node;
}

// Optional: Free memory recursively
void freeTree(Node* node) {
    if (node != nullptr) {
        freeTree(node->left);
        freeTree(node->right);
        delete node;
    }
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
            root = insert(root, 8); // duplicate ignored

            std::cout << "Elements of the first tree:\n";
            displayTree(root);

            std::cout << (search(root, 10) ? "\n10 exists" : "\n10 does not exist") << std::endl;
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

            std::cout << (search(root, 100) ? "\n100 exists" : "\n100 does not exist") << std::endl;
            break;

        default:
            std::cout << "Invalid test case number.\n";
            break;
    }

    // Clean up memory
    freeTree(root);

    return 0;
}
