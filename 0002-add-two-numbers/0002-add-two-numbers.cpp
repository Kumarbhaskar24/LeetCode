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
//     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//      int size=0;
//         int size2=0;
//         ListNode* temp1=l1;
//         int ans=0;
//         ListNode* temp2=l2;
//         while(temp1!=NULL)
//         {
//             temp1=temp1->next;
//             size++;
         
//         }
//         while(temp2!=NULL)
//         {
//             temp2=temp2->next;
//             size2++;
             
//         }
//         int sum1=0;
//         int sum2=0;
//         temp1=l1;
//         temp2=l2;
//         while(temp1!=NULL)
//         {
//             sum1=sum1+temp1->val*pow(10,size-1);
//             temp1=temp1->next;
//             size--;
//         }
//         while(temp2!=NULL)
//         {
//             sum2=sum2+temp2->val*pow(10,size2-1);
//             size2--;
//             temp2=temp2->next;
//         }
//         ans=sum1+sum2;
//         cout<<ans;
//         int temp=0;
//         ListNode* nn;
//         ListNode* fans=NULL;
//         ListNode* head=NULL;
//         nn=new ListNode;
//         nn->val=0;
//         nn->next=NULL;
//         head=nn;
                
//         while(ans>0)
//         {
//             temp=ans%10;
            
//             if(head==nn)
//             {
//                 nn=new ListNode;
//                 nn->val=temp;
//                 nn->next=NULL;
//                 head=nn;
//                 fans=head;
//                 nn=NULL;
//             }
//             else{
//                 nn=new ListNode;
//                 nn->val=temp;
//                 nn->next=NULL;
//                 fans->next=nn;
//                 fans=fans->next; 
//             }
//             ans=ans/10;
//            // cout<<ans<<endl;
//         }
//       return head;      
//     }
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *dummy = new ListNode(0);
        ListNode *curr = dummy;
        int carry = 0;
        
        while(l1 != NULL || l2 != NULL || carry == 1){
            int sum = 0;
            if(l1 != NULL){
                sum += l1->val;
                l1 = l1->next;
            }
            if(l2 != NULL){
                sum += l2->val;
                l2 = l2->next;
            }
            sum += carry;
            carry = sum/10;
            ListNode *node = new ListNode(sum % 10);
            curr->next = node;
            curr = curr->next;
        }
        return dummy->next;
    }
};