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
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow= head;
        ListNode* fast= head;
        if(head==NULL)
            return NULL;
        while(slow->next)
        {
            if(slow->val==INT_MAX)
            {
                return slow;
            }
            slow->val=INT_MAX;
            slow=slow->next;
            if(fast&&fast->next)
                fast=fast->next->next;
            else
                return NULL;          
        }
        return NULL;
    }
};