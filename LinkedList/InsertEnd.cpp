#include <iostream>

using namespace std;

struct Node{
  int data;
  Node *next;
  Node(int x){
      data = x;
      next = NULL;
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
    return head;
}
void traverse(Node *head){
    Node *curr = head;
    while(curr!=NULL){
        cout << curr->data <<" ";
        curr= curr->next;
    }
}


int main()
{
    Node *head = new Node(25);
    head->next = new Node(30);
    head->next->next = new Node(35);   
    head = insertEnd(head, 20);
    traverse(head);
    
    return 0;
}
