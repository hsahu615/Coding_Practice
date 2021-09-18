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

Node *sortedInsert(Node *head, int data)
{
    Node *temp = new Node(data);
    Node *curr = head;
    if (head == NULL)
    {
        return temp;
    }
    if (curr->data > data)
    {
        temp->next = curr;
        return temp;
    }
    while (curr->next != NULL && curr->next->data <= data)
    {
        curr = curr->next;
    }
    temp->next = curr->next;
    curr->next = temp;
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
    head->next->next = new Node(35);
    int data = 19;
    head = sortedInsert(head, data);
    traverse(head);

    return 0;
}
