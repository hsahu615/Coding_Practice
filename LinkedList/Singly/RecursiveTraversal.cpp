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

void traverse(Node *head){
    if(head==NULL){
        return;
    }
    cout << head->data << " ";
    traverse(head->next);
}



int main()
{
    Node *head = new Node(25);
    head->next = new Node(30);
    head->next->next = new Node(35);   
    traverse(head);
    
    return 0;
}
