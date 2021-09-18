/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;


struct Node{
    int data;
    Node* next;
    Node(int x){
        data = x;
        next = NULL;
    }
};
// Naive
// Node* delHead(Node* head){
//     if(head==NULL || head->next==head){
//         delete head;
//         return NULL;
//     }
//     Node* curr = head;
//     while(curr->next!=head){
//         curr=curr->next;
//     }
//     curr->next = head->next;
//     delete head;
//     return curr->next;
// }

// Efficient Approach

Node* delHead(Node* head){
    if(head==NULL){
        return NULL;
    }
    if(head->next==head){
        delete head;
        return NULL;
    }
    else{
        head->data = head->next->data;
        Node* curr = head->next;
        head->next = head->next->next;
        delete curr;
        return head;
    }
}

void traverse(Node* head){
    Node* curr = head->next;
    cout<<head->data << " ";
    if(head==NULL){
        return;
    }
    
    while(curr!=head){
        cout << curr->data << " ";
        curr = curr->next;
    }
}


int main()
{
    Node* head = new Node(10);
    head->next = new Node(15);
    head->next->next = new Node(20);
    head->next->next->next = new Node(25);
    head->next->next->next->next = head;
    head = delHead(head);
    traverse(head);
    return 0;
}
