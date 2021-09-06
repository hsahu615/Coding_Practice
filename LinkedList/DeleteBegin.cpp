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

Node *delBegin(Node *head){
    if(head==NULL){
        return NULL;
    }
    Node *curr = head->next;
    delete head;
    return curr;   
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
    head = delBegin(head);
    traverse(head);
    
    return 0;
}
