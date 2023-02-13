/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL||head->next==NULL)
            return head;
        ListNode* prev=head;
        ListNode* nex=head->next;
        while(nex!=NULL)
        {
            if(prev->val==nex->val)
            {
                if(nex->next==NULL)
                    prev->next=NULL;
                nex=nex->next;
            }
            else{
                prev->next=nex;
                prev=nex;
                nex=nex->next;
            }
        }
        return head;
    }
};