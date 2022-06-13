class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *ans = new ListNode(0);
        ListNode *p = l1, *q=l2, *curr = ans;
        int carry = 0;
        
        while(p!=NULL||q!=NULL){  // addition of two numbers if one is a single digit and other is a double digit
            int x = (p!=NULL)?p->val:0;
            int y = (q!=NULL)?q->val:0;
            int sum = carry + x+ y;
            carry = sum/10;
            curr->next = new ListNode(sum%10);
            curr = curr->next;
            
            if(p!=NULL) 
                p=p->next;
            if(q!=NULL)
                q=q->next;
        }
        
        if(carry>0)
            curr->next=new ListNode(carry);
        
        return ans->next;
    }
};