
#include <iostream>
using namespace std;



struct Node{
    int key;
    Node* left;
    Node* right;
    Node(int x){
        key = x;
        left = right = NULL;
    }
};

int size(Node* root){
    if(root==NULL){
      return 0;
    }
    return (size(root->left)+size(root->right)+1);
}

int main()
{
    Node* root = new Node(5);
    root->left = new Node(10);
    root->right = new Node(15);
    root->left->left = new Node(20);
    root->left->right = new Node(30);
    root->right->left = new Node(35);
    root->right->right = new Node(35);
    cout << size(root);
    return 0;
}
