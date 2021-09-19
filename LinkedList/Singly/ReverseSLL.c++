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
// Iterative Reverse
/* apna first node curr h, previous abhi null h qki first number p h, pehle curr->next ki value store krenge, fir curr->next ko previous bna denge, fir next iteration k lie prev ko curr or curr ko next bna denge*/

Node* reverse(Node *head){
    Node* curr = head;
    Node* prev = NULL;
    while(curr!=NULL){
      Node* next = curr->next;
      curr->next = prev;
      prev = curr;
      curr = next;
    }
    return prev;

}

// Recursive reverse 1
Node *revers(Node *head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node *reshead = revers(head->next);
    head->next->next = head;
    head->next = NULL;
    return reshead;
}
// Recursive reverse 2
Node* rev(Node* curr, Node* prev){
    if(curr == NULL){
        return prev;
    }
    Node* next = curr->next;
    curr->next = prev;
    return rev(next, curr);
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
    head = reverse(head);
    traverse(head);
    head = rev(head, NULL);
    cout << endl;
    traverse(head);
    return 0;
}

