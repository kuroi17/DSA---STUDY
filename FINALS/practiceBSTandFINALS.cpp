#include <iostream>
using namespace std;

struct TreeNode{
    int value;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val){
        value = val;
        left = nullptr;
        right = nullptr;
    }
};

TreeNode* createNode(int value){
        return new TreeNode(value);
    }
TreeNode* insertNode(TreeNode* root, int value){
    if (root == nullptr) return createNode(value); // create node

    if (value < root -> value){
        root -> left = insertNode(root -> left, value);
    } else if (value > root -> value){
         root -> right = insertNode(root -> right, value);
    }else{
        cout << "Duplicate value not inserted.\n";
    }

    return root;
    }
    void inOrderTraversal(TreeNode* root){
        if( root != nullptr){
            inOrderTraversal(root -> left); // left
            cout << root -> value << " "; // root
            inOrderTraversal(root -> right); // right;
        }
    }

    bool searchNode(TreeNode* root, int value){
        if (root == nullptr) return false;

        if (root -> value == value) return true;

        if(value < root -> value){
            return searchNode(root -> left, value);
        }
        else{
            return searchNode(root -> right, value);
        }
    }
    


int main() {
    TreeNode* root = nullptr;

    // Insert some nodes
    root = insertNode(root, 50);
    insertNode(root, 30);
    insertNode(root, 70);
    insertNode(root, 20);
    insertNode(root, 40);
    insertNode(root, 60);
    insertNode(root, 80);

    cout << "In-Order Traversal: ";
    inOrderTraversal(root); // should print sorted order: 20 30 40 50 60 70 80
    cout << endl;

    // Search test
    int toFind = 40;
    if (searchNode(root, toFind)) {
        cout << toFind << " found in the BST.\n";
    } else {
        cout << toFind << " not found in the BST.\n";
    }

    return 0;
}

