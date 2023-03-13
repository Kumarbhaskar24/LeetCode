/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool symmetric(TreeNode* root1,TreeNode* root2)
    { 
        
        if(root1==NULL&&root2==NULL)
        {
       
            return true;
            //cout<<root1->val<<" inside and"<<root2->val<<endl;
        }
         if(root1==NULL||root2==NULL)
        {
       
            return false;
            //cout<<root1->val<<" inside and"<<root2->val<<endl;
        }
        if(root1->val!=root2->val)
        {
         cout<<root1->val<<"and"<<root2->val<<endl;
            return false;
        }
        cout<<root1->val<<" after and"<<root2->val<<endl;
            // else if(root1->value==root2->value)
        //     return true;
        return symmetric(root1->left,root2->right)&&symmetric(root1->right,root2->left);
    }
    
    bool isSymmetric(TreeNode* root) {
     if(root==NULL)
     {
         return false;
     }
        return symmetric(root->left,root->right);
    }
};