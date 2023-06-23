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
    int res=0;
    int helper(TreeNode* root)
    {
        if(root==NULL)
            return 0;
        int x=helper(root->left);
        int y=helper(root->right);
        res=max(res,x+y);
        return max(x,y)+1;
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        helper(root);
        return res;
    }
};