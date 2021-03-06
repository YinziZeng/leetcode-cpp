/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL || head->next==NULL)
            return false;
        ListNode *fast,*slow;
        slow=head;
        fast=head->next;
        while(1)
        {
            if(fast==NULL)
                return false;
            if(fast==slow)
                return true;
            fast=fast->next;
            if(fast==NULL)
                return false;
            if(fast==slow)
                return true;
            fast=fast->next;
             if(fast==NULL)
                return false;
            if(fast==slow)
                return true;
            slow=slow->next;
            if(fast==slow)
                return true;            
        }
    }
};
