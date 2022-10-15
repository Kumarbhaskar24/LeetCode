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
        ListNode* slow=head;
        ListNode* fast=head;
        if(head==NULL)
            return false;
        slow=slow->next;
          if(fast->next!=NULL&&fast->next->next!=NULL)
                 fast=fast->next->next;
            else return false;
        while(fast!=slow)
        {
            slow=slow->next;
            if(fast->next!=NULL&&fast->next->next!=NULL)
                 fast=fast->next->next;
            else return false;
        }
        return true;
    }
};