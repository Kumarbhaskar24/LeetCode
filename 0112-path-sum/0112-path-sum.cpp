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
    
    bool solve(TreeNode* root,int targetsum)
    {
        if(!root)
            return false;
        if(targetsum==0&&root->left==NULL&&root->right==NULL)
            return true;
        if(targetsum<0)
            return false;
        bool x= solve(root->left,targetsum-root->val);
        bool y= solve(root->right,targetsum-root->val);
        return x||y;
        
    }
    
    bool hasPathSum(TreeNode* root, int sum) {
        //return solve(root,targetSum);    
        if (root == NULL) return false;
        if (root->val == sum && root->left ==  NULL && root->right == NULL) return true;
        return hasPathSum(root->left, sum-root->val) || hasPathSum(root->right, sum-root->val);
    }
};