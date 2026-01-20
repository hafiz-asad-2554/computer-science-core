#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left, *right;
    Node(int v) {
        data = v;
        left = right = NULL;
    }
};

void printPostorder(Node* node) {
    if (node == NULL) return;
    printPostorder(node->left);
    printPostorder(node->right);
    cout << node->data << " ";
}

void printInorder(Node* node) {
    if (node == NULL) return;
    printInorder(node->left);
    cout << node->data << " ";
    printInorder(node->right);
}

void printPreorder(Node* node) {
    if (node == NULL) return;
    cout << node->data << " ";
    printPreorder(node->left);
    printPreorder(node->right);
}

int main() {
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    
    cout << "\nPreorder traversal: ";
    printPreorder(root);
    
    cout << "\nInorder traversal: ";
    printInorder(root);
    
    cout << "\nPostorder traversal: ";
    printPostorder(root);
    
    return 0;
}
