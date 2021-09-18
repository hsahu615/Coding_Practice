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
// Node* insertEnd(Node* head, int data){
//     Node* temp = new Node(data);
//     if(head==NULL){
//         temp->next = temp;
//         return temp;
//     }
//     else{
//         Node* curr = head;
//         while(curr->next!=head){
//             curr = curr->next;
//         }
//         temp->next = curr->next;
//         curr->next = temp;
//         return head;
//     }
// }

// Efficient Solution

Node* insertEnd(Node* head, int data){
    Node* temp = new Node(data);
    if(head==NULL){
        temp->next = temp;
        return temp;
    }
    else{
        temp->next = head->next;
        head->next = temp;
        int t = head->data;
        head->data = temp->data;
        temp->data = t;
        return temp;
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
    head = insertEnd(head, 30);
    traverse(head);
    return 0;
}
