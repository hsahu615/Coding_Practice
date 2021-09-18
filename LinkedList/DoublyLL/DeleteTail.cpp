
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

void traverse(Node *head){
    Node *temp = head;
    while(temp!=NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
}

Node *dellast(Node *head){
    if(head==NULL){
        return NULL;
    }
    if(head->next ==NULL){
        delete head;
        return NULL;
    }
    Node *curr = head;
    while(curr->next!=NULL){
        curr = curr->next;
    }
    curr->prev->next = NULL;
    delete curr;
    return head;
    
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
    head = dellast(head);
    traverse(head);
    return 0;
}
