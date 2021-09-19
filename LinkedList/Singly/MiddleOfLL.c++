#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

void getMiddle(Node *head){
        int count = 0;
        if(head==NULL){
            return;
        }
        if(head->next==NULL){
          cout<< head->data;
        }
        Node* slow = head;
        Node* fast = head;
        while(fast!=NULL && fast->next!=NULL){
          slow = slow->next;
          fast = fast->next->next;
        }
        cout<< slow->data;
    }

void traverse(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
}

int main()
{
    Node *head = new Node(25);
    head->next = new Node(30);
    head->next->next = new Node(35);
    head->next->next->next = new Node(40);
    getMiddle(head);

    return 0;
}