
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
int maxlevel = 0;
void leftview(Node* root, int level){
    if(root==NULL){
      return;
    }
    if(maxlevel<level){
      cout << root->key << " ";
      maxlevel++;
    }
    leftview(root->left, level+1);
    leftview(root->right, level+1);

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
    leftview(root,1);
    return 0;
}
