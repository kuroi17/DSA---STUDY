#include <iostream>
using namespace std;

// Define a structure for tree node
struct Node {
    int data;
    Node* left;
    Node* right;

    // Constructor
    Node(int value) {
        data = value;
        left = right = nullptr;
    }
};

// Inorder traversal (Left, Root, Right)
void inorder(Node* root) {
    if (root != nullptr) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

// Preorder traversal (Root, Left, Right)
void preorder(Node* root) {
    if (root != nullptr) {
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }
}

// Postorder traversal (Left, Right, Root)
void postorder(Node* root) {
    if (root != nullptr) {
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
    }
}


int main() {
    int val1, val2, val3, val4, val5;

    cout << "Enter value for root node: ";
    cin >> val1;

    cout << "Enter value for root->left node: ";
    cin >> val2;

    cout << "Enter value for root->right node: ";
    cin >> val3;

    cout << "Enter value for root->left->left node: ";
    cin >> val4;

    cout << "Enter value for root->left->right node: ";
    cin >> val5;

    Node* root = new Node(val1);
    root->left = new Node(val2);
    root->right = new Node(val3);
    root->left->left = new Node(val4);
    root->left->right = new Node(val5);

    // Traversals
    cout << "Inorder Traversal: ";
    inorder(root);
    cout << endl;

    cout << "Preorder Traversal: ";
    preorder(root);
    cout << endl;

    cout << "Postorder Traversal: ";
    postorder(root);
    cout << endl;

    return 0;
}
