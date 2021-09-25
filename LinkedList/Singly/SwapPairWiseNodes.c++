 
    ListNode* swapPairs(ListNode* head) {
        ListNode* curr = head;
        while(curr!=NULL && curr->next!=NULL){
            int data = curr->val;
            curr->val = curr->next->val;
            curr->next->val = data;
            curr = curr->next->next;
        }
        return head;
    }