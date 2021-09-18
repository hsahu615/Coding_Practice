

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


Node *insertEnd(Node *head, int x){
    Node *temp = new Node(x);
    if(head==NULL){
        return temp;
    }
    Node *curr = head;
    while(curr->next!=NULL){
        curr = curr->next;
    }
    curr->next = temp;
    temp->prev = curr;
    return head;
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
    head = insertEnd(head, 25);
    traverse(head);
}
