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
    int maxAncestorDiff(TreeNode* root) {
       
     
       dfs(root,root->val,root->val);
        return ans;
    }
    void dfs(TreeNode* root,int currmax,int currmin)
    {
     
        if(root==NULL)
            return ;
        ans=max({ans,currmax-root->val,root->val-currmin});
        currmax=max(root->val,currmax);
        currmin=min(root->val,currmin);
        dfs(root->left,currmax,currmin);
        dfs(root->right,currmax,currmin);
   
    }
};