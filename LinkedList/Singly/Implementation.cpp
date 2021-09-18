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



int main()
{
    Node *head = new Node(25);
    Node *b = new Node(30);
    Node *c = new Node(35);   
    head->next = b;
    b->next = c;
    
    return 0;
}
