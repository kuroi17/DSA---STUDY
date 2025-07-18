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

void postorderTraversal(Node* node) {
	if (node == nullptr) {
		return;
	}

	postorderTraversal(node->left); // Traverse left subtree

	postorderTraversal(node->right); // Traverse right subtree

	cout << node->data << " "; // Process current node
}

int main() {
	// Construct a sample binary tree
	Node* root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);
	root->left->left = new Node(4);
	root->left->right = new Node(5);

	// Perform postorder traversal on the binary tree
	cout << "Postorder Traversal: ";
	postorderTraversal(root);
	cout << endl;

	// Clean up - free the allocated memory
	delete root->left->right;
	delete root->left->left;
	delete root->left;
	delete root->right;
	delete root;

	return 0;
}
