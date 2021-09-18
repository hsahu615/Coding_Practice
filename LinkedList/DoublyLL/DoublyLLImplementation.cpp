/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;


struct Node{
    int data;
    Node *next;
    Node *prev;
    Node(int x){
        data = x;
        next = NULL;
        prev = NULL;
    }
};

// Node *insertEnd(Node *head, int x){
//     Node *temp = new Node(x);
//     if(head==NULL){
//         return temp;
//     }
//     Node *curr = head;
//     while(curr->next!=NULL){
//         curr = curr->next;
//     }
//     temp->prev = curr->next;
//     return head;
// }

int main()
{
    Node *head = new Node(10);
    Node *temp1 = new Node(15);
    Node *temp2 = new Node(20);
    head->next = temp1;
    temp1->prev = head;
    temp1->next = temp2;
    temp2->prev = temp1;
}
