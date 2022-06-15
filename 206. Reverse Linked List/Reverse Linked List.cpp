class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(!head) return NULL;
        
        ListNode* prev = NULL;
        ListNode* next;
        ListNode* curr = head;
        
        while(curr!=NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            
        }
        
        return prev;
    }
};