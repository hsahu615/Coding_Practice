
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

int getMax(Node* root){
    if(root==NULL){
      return INT32_MIN;
    }
    return max(root->key, max(getMax(root->left), getMax(root->right)));  
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
    cout << getMax(root);
    return 0;
}
