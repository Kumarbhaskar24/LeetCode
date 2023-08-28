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
    void inorder(TreeNode* root)
    {
        if(root==NULL)
            return ;
        inorder(root->left);
        if(root->left&&root->left->left==NULL&&root->left->right==NULL)
        {
            ans=ans+root->left->val;
        }
        inorder(root->right);
        
    }
    int sumOfLeftLeaves(TreeNode* root) {
        inorder(root);
        return ans;
    }
};