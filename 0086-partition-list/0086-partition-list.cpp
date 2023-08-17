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
    ListNode* partition(ListNode* head, int x) {
        ListNode* left=NULL;
        ListNode* right=NULL;
        ListNode* temp=head;
        ListNode* head2=NULL;
        if(head==NULL)
            return head;
        while(temp)
        {
            if(temp->val<x)
                if(left==NULL)
                {
                    left=temp;
                    head=left;
                }
                else{
                    left->next=temp;
                    left=left->next;
                }
            else{
                if(right==NULL)
                {
                    right=temp;
                    head2=right;
                }
                else{
                    right->next=temp;
                    right=right->next;
                    }
                }
            temp=temp->next;
        }
        if(left)
            left->next=head2;
        else
            head=head2;
        if(right)
            right->next=NULL;
        return head;
    }
};