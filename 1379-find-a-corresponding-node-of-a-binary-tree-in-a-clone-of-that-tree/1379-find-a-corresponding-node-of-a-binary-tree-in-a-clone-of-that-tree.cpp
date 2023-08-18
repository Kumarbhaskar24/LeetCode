/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* ans;
    TreeNode* helper(TreeNode* cloned,TreeNode* target)
    {
        if(!cloned)
            return cloned;
        helper(cloned->left,target);
        if(cloned->val==target->val)
        {
            ans= cloned;
            return ans;
        }
        helper(cloned->right,target);
        return ans;
    }
    
    
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        return helper(cloned,target);
    }
};