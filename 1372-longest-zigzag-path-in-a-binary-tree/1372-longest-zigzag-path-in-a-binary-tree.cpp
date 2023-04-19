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
    
    int ans=0;
    int temp=0;
    int a=0,b=0;
    int left_tree(TreeNode* root)
    {
        if(root==NULL||root->right==NULL)
            return 0;
        root->val=-1;
       return ans= right_tree(root->right)+1;
        
    }
    
    int right_tree(TreeNode* root)
    {
        if(root==NULL||root->left==NULL)
            return 0;
        root->val=-1;
        return ans=left_tree(root->left)+1;
    }
    
    
    
    int longestZigZag(TreeNode* root) {
        if(root==NULL)
            return 0;

        if(root->left&&root->left->val!=-1)
        {
            a= left_tree(root->left)+1;
            ans=0;
        }
        if(root->right&&root->right->val!=-1)
        {
            b= right_tree(root->right)+1;
            ans=0;
        }
        temp= max(temp,max(a,b));
        if(root->left)
            longestZigZag(root->left);
        if(root->right)
            longestZigZag(root->right);
        
        return temp;
    }
};