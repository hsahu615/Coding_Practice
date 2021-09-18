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

// Naive Approach
// Node* insertBegin(Node* head, int x){
//     Node* temp = new Node(x);
//     if(head==NULL){
//         temp->next = temp;
//         return temp;
//     }
//     Node* curr = head;
//     while(curr->next!=head){
//         curr = curr->next;
//     }
//     temp->next = head;
//     curr->next = temp;
//     return temp;
// }

// Efficient Approach
Node* insertBegin(Node* head, int x){
    Node* temp = new Node(x);
    if(head==NULL){
        temp->next = temp;
        return temp;
    }
    else{
        temp->next = head->next;
        head->next = temp;
        int d = temp->data;
        temp->data = head->data;
        head->data = d;
    
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
    head = insertBegin(head, 5);
    traverse(head);
    return 0;
}
