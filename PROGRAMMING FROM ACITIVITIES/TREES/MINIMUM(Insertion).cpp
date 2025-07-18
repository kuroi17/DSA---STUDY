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

// Insert node using BST rules
Node* insert(Node* node, int value) {
    if (node == nullptr) return createNode(value);

    if (value < node->value)
        node->left = insert(node->left, value);
    else if (value > node->value)
        node->right = insert(node->right, value);

    return node;
}

// In-order traversal display
void displayTree(Node* node) {
    if (node != nullptr) {
        displayTree(node->left);
        std::cout << node->value << " ";
        displayTree(node->right);
    }
}

// Find the minimum value node in the tree
Node* getMinimumValueNode(Node* node) {
    if (node == nullptr) return nullptr;

    Node* leftMin = getMinimumValueNode(node->left);
    Node* rightMin = getMinimumValueNode(node->right);
    Node* minNode = node;

    if (leftMin != nullptr && leftMin->value < minNode->value)
        minNode = leftMin;
    if (rightMin != nullptr && rightMin->value < minNode->value)
        minNode = rightMin;

    return minNode;
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
            root = insert(root, 8); // Duplicate - ignored by BST insert

            std::cout << "Elements of the first tree:\n";
            displayTree(root);
            std::cout << "\nMinimum value: " << getMinimumValueNode(root)->value << std::endl;
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
            std::cout << "\nMinimum value: " << getMinimumValueNode(root)->value << std::endl;
            break;

        default:
            std::cout << "Invalid test case number.\n";
            break;
    }

    return 0;
}
