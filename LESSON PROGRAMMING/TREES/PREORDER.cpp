#include <iostream>
using namespace std;

struct Node {
	int data;
	Node* left;
	Node* right;

	Node(int val) {
		data = val;
		left = nullptr;
		right = nullptr;
	}
};

void preorderTraversal(Node* node) {
	if (node == nullptr) {
		return;
	}

	cout << node->data << " "; // Process current node

	preorderTraversal(node->left); // Traverse left subtree

	preorderTraversal(node->right); // Traverse right subtree
}

int main() {
	// Construct a sample binary tree
	Node* root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);
	root->left->left = new Node(4);
	root->left->right = new Node(5);

	// Perform preorder traversal on the binary tree
	cout << "Preorder Traversal: ";
	preorderTraversal(root);
	cout << endl;

	// Clean up - free the allocated memory
	delete root->left->right;
	delete root->left->left;
	delete root->left;
	delete root->right;
	delete root;

	return 0;
}
