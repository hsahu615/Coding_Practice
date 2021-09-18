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

Node *insertatpos(Node *head, int x, int pos){
    Node *temp = new Node(x);
    int i = 0;
    if(pos==1){
        temp->next = head;
        return temp;
    }
    Node *curr = head;
    for(int i = 0;i<pos-2;i++){
        curr = curr->next;
    }
    if(curr==NULL){
        return head;
    }
    temp->next = curr->next;
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
    head = insertatpos(head, 32, 2);
    traverse(head);
    
    return 0;
}
