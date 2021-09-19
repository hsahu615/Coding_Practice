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

bool detect(Node *head)
{
  Node* slow = head, *fast = head;
  if(head==NULL){
    return false;
  }
  while(fast!=NULL && fast->next!=NULL){
    slow = slow->next;
    fast = fast->next->next;
    if(slow==fast){
      return true;
    }
  }
  return false;
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
  head->next->next = new Node(30);
  head->next->next->next = new Node(35);
  head->next->next->next->next = head->next;
  cout << detect(head);

  return 0;
}