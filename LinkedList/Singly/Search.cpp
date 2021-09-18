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

// int search(Node *head, int x){
//     int res = 0;
//     int count = 1;
//     Node *curr = head;
//     if(head==NULL){
//         return -1;
//     }
//     while(curr!=NULL && curr->data!=x){
//         curr = curr->next;
//         count++;
//     }
//     if(curr==NULL){
//         return -1;
//     }
//     return count;
// }


int search(Node *head, int x){
    if(head==NULL){
        return -1;
    }
    if(head->data ==x){
        return 1;
    }
    else{
        int res = search(head->next, x);
        if(res==-1) return -1;
        else{
            return res+1;
        }
    }
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
    cout<<search(head, 35);

    
    return 0;
}
