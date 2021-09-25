
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
bool children(Node* root){
    if(root==NULL){
      return true;
    }
    if(root->right==NULL && root->left==NULL){
      return true;
    }
    int sum = 0;
    if(root->left!=NULL) sum+= root->left->key;
    if(root->right!=NULL) sum+= root->right->key;
    return (sum==root->key && children(root->left) && children(root->right));
}

int main()
{
    Node* root = new Node(10);
    root->left = new Node(7);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(3);
    root->right->left = new Node(1);
    root->right->right = new Node(2);
    cout << children(root);
    return 0;
}
