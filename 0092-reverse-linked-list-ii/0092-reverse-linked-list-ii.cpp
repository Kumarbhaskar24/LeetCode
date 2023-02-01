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
// class Solution {
// public:
//     int cnt=1;
//     ListNode* reverse(ListNode* head,int right,ListNode* Original_head)
//     {
//         ListNode* before=head;
//         ListNode* curr=head;
//         ListNode* prev=NULL;
//         ListNode* nex=NULL;
//         while(cnt!=right&&curr->next!=NULL)
//         {
//             nex=curr->next;
//             curr->next=prev;
//             prev=curr;
//             curr=nex;
//             cnt++;
//         }
//         // cout<<curr->val<<" "<<before->next->val<<" ";
//         // cout<<cnt;
//         before->next->next=curr->next;
//         before->next=curr;
//         curr->next=prev;
//         return Original_head;
//     }
    
//     ListNode* reverseBetween(ListNode* head, int left, int right) {
//         if(head->next==NULL)
//             return head;
//         ListNode* temp=head;
//         while(cnt!=left)
//         {
//             cnt++;
//             temp=temp->next;
//         }
//         return reverse(temp,right,head);
//     }
// };



class Solution {
public:
   ListNode* reverseBetween(ListNode* head, int m, int n) {
       ListNode *dummy = new ListNode(0), *pre = dummy, *cur;
       dummy -> next = head;
       for (int i = 0; i < m - 1; i++) {
           pre = pre -> next;
       }
       cur = pre -> next;
       for (int i = 0; i < n - m; i++) {
           ListNode* temp = pre -> next;
           pre -> next = cur -> next;
           cur -> next = cur -> next -> next;
           pre -> next -> next = temp;
       }
       return dummy -> next;
   }
};
