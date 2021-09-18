

#include <iostream>

using namespace std;


struct Node{
    int data;
    Node *next;
    Node *prev;
    Node(int x){
        data = x;
        next = NULL;
        prev = NULL;
    }
};


Node *reverse(Node *head){
    Node *prev=NULL;
    Node *curr = head;
    if(head==NULL || head->next==NULL){
        return head;
    }
    while(curr!=NULL){
        prev = curr->prev;
        curr->prev = curr->next;
        curr->next = prev;
        curr = curr->prev;
    }
    return prev->prev;
}

void traverse(Node *head){
    Node *temp = head;
    while(temp!=NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
}


int main()
{
    Node *head = new Node(10);
    Node *temp1 = new Node(15);
    Node *temp2 = new Node(20);
    head->next = temp1;
    temp1->prev = head;
    temp1->next = temp2;
    temp2->prev = temp1;
    head = reverse(head);
    traverse(head);
}
