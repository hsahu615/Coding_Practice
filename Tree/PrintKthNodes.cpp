
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

void print(Node* root, int k){
    if(root!=NULL){
        if(k==0){
        cout << root->key<<" ";
        }
        print(root->left, k-1);
        print(root->right, k-1);
    }
    
    
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
    int k = 2;
    print(root, k);
    return 0;
}
