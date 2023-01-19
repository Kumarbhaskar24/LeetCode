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
    ListNode* oddEvenList(ListNode* head) {
       ListNode* temp=head;
        if(head==NULL)
            return head;
        int n=1;
        int i=0;
        while(temp!=NULL) 
        {
            temp=temp->next;
            n++;
        }
        vector<int> t;
        temp=head;
        while(temp!=NULL) 
        {
            t.push_back(temp->val);
            if(temp->next)
                temp=temp->next->next;
            else
                temp=temp->next;
        }
        temp=head->next;
        while(temp!=NULL) 
        {
            t.push_back(temp->val);
            if(temp->next)
                temp=temp->next->next;
            else
                temp=temp->next;
        }
        temp=head;
           while(temp!=NULL) 
        {
            temp->val=t[i];  
            temp=temp->next;
            i++;          
        }
        return head;
    }
};