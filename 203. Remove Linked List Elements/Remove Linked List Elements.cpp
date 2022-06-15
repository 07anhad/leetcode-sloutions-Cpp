class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(!head) return NULL;
        
        head->next = removeElements(head->next,val);
        
        if(head->val==val)
            return head->next;
        else
            return head;
    }
};