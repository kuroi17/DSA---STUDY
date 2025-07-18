#include <iostream>
// =========================
// Tree Structure and Logic
// =========================

struct Node {
    int value;
    Node* left;
    Node* right;
};

// Create a new node
Node* createNode(int value) {
    Node* node = new Node;
    node->value = value;
    node->left = nullptr;
    node->right = nullptr;
    return node;
}

// Insert value into BST
Node* insert(Node* node, int value) {
    if (node == nullptr) {
        return createNode(value);
    }
    if (value < node->value) {
        node->left = insert(node->left, value);
    } else {
        node->right = insert(node->right, value);
    }
    return node;
}

// Display BST (in-order)
void displayTree(Node* node) {
    if (node != nullptr) {
        displayTree(node->left);
        std::cout << node->value << " ";
        displayTree(node->right);
    }
}

// Get the node with maximum value in the tree
Node* getMaximumValueNode(Node* node) {
    if (node == nullptr) return nullptr;

    Node* leftMax = getMaximumValueNode(node->left);
    Node* rightMax = getMaximumValueNode(node->right);

    Node* maxNode = node;

    if (leftMax != nullptr && leftMax->value > maxNode->value) {
        maxNode = leftMax;
    }
    if (rightMax != nullptr && rightMax->value > maxNode->value) {
        maxNode = rightMax;
    }

    return maxNode;
}

// =========================
// Main Function
// =========================

int main() {
    std::cout << "Enter test case number (1 or 2): ";
    int testCase;
    std::cin >> testCase;

    Node* root = nullptr;

    switch (testCase) {
        case 1:
            // Test Case 1
            root = insert(root, 3);
            root = insert(root, 5);
            root = insert(root, 8);
            root = insert(root, 1);
            root = insert(root, 6);
            root = insert(root, 4);
            root = insert(root, 7);
            root = insert(root, 8);

            std::cout << "Elements of the first tree:\n";
            displayTree(root);

            std::cout << "\nMaximum value: " << getMaximumValueNode(root)->value << std::endl;
            break;

        case 2:
            // Test Case 2
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

            std::cout << "\nMaximum value: " << getMaximumValueNode(root)->value << std::endl;
            break;

        default:
            std::cout << "Invalid test case number.\n";
            break;
    }

    return 0;
}
