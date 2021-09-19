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

Node *remov(Node *head)
{
  if (head == NULL)
  {
    return NULL;
  }
  Node *curr = head;
  while (curr != NULL && curr->next != NULL)
  {
    if (curr->data == curr->next->data)
    {
      Node *temp = curr->next;
      curr->next = curr->next->next;
      delete (temp);
    }
    else
    {
      curr = curr->next;
    }
  }
  return head;
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
  head = remov(head);
  traverse(head);

  return 0;
}