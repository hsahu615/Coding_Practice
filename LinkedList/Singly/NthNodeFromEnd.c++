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

void NthNode(Node *head, int n){
    Node* slow = head;
    Node* fast = head;
    int i=1;
    while(i<=n){
      if(fast->next==NULL){
        return;
      }
      fast = fast->next;
      i++;
    }
    while(fast!=NULL){
      slow = slow->next;
      fast = fast->next;
    }
    cout << slow->data;

}

void traverse(Node *head)
{
    Node *curr = head;
    while(curr != NULL)
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
    head->next->next->next->next = new Node(45);

    NthNode(head, 2);

    return 0;
}