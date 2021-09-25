
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


// INEFFICIENT SOLUTION
// T.C: O(h*n)
// struct Node{
//     int key;
//     Node* left;
//     Node* right;
//     Node(int x){
//         key = x;
//         left = right = NULL;
//     }
// };

// int height(Node* root){
//     if(root==NULL){
//         return 0;
//     }
//     if(root!=NULL){
//         return max(height(root->left), height(root->right))+1;
//     }
// }

// void BFS(Node* root, int k){
//     if(root!=NULL){
//         if(k==0){
//         cout << root->key<<" ";
//         }
//         BFS(root->left, k-1);
//         BFS(root->right, k-1);
//     }
    
    
// }

// int main()
// {
//     Node* root = new Node(5);
//     root->left = new Node(10);
//     root->right = new Node(15);
//     root->left->left = new Node(20);
//     root->left->right = new Node(30);
//     root->right->left = new Node(35);
//     root->right->right = new Node(35);
//     int k = 0;
//     for(int i=0;i<height(root);i++){
//         BFS(root, i);
//         cout << endl;
//     }
//     return 0;
// }


struct Node{
    int key;
    Node* left;
    Node* right;
    Node(int x){
        key = x;
        left = right = NULL;
    }
};



void BFS(Node* root){
    if(root==NULL){
        return;
    }
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(q.size()>1){
        Node* curr = q.front();
        q.pop();
        if(curr==NULL){
            cout << "\n";
            q.push(NULL);
            continue;
        }
        cout << curr->key << " ";
        if(curr->left!=NULL){
            q.push(curr->left);
        }
        if(curr->right!=NULL){
            q.push(curr->right);
        }
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
    BFS(root);
    return 0;
}
