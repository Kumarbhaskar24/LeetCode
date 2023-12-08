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
    vector<int> helper(TreeNode* root,vector<int> &ans)
    {
        if(!root->left&&!root->right)
        {
            ans.push_back(root->val);
            return ans;
        }
        if(root->left)
            helper(root->left,ans);
        if(root->right)
            helper(root->right,ans);
        return ans;
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> ans1;
        vector<int> ans2;
        vector<int> ans3=helper(root1,ans1);
        vector<int> ans4=helper(root2,ans2);
        if(ans3.size()!=ans4.size())
            return false;
        for(int i=0;i<ans3.size();i++)
        {
            if(ans3[i]!=ans4[i])
                return false;
        }
        return true;
    }
};