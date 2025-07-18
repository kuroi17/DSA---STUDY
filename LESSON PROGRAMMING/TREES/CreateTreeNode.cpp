#include <iostream>
using namespace std;

// Define the Node structure
struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

Node* createTreeNode(){
    cout << "Enter value for the node (-1 for no node): ";
    int value;
    cin >> value;
    
    if (value == -1) {
        return nullptr; // Use -1 to indicate no node
    }
    Node* newNode = new Node(value);
    cout << "Enter left child for " << value << ": ";
    newNode->left = createTreeNode();
    cout << "Enter right child for " << value << ": ";
    newNode->right = createTreeNode();
    return newNode;
}

// Preorder traversal
void preorder(Node* root) {
    if (!root) return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

// Inorder traversal
void inorder(Node* root) {
    if (!root) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// Postorder traversal
void postorder(Node* root) {
    if (!root) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main (){
    cout << "Build your binary tree:\n";
    Node* root = createTreeNode();

    cout << "\nPreorder traversal: ";
    preorder(root);
    cout << "\nInorder traversal: ";
    inorder(root);
    cout << "\nPostorder traversal: ";
    postorder(root);

    return 0;
}