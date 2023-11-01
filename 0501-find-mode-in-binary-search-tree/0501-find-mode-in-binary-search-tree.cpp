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
    void inorder(unordered_map<int,int> &m,TreeNode* root)
    {
        if(root==NULL)
            return;
        inorder(m,root->left);
        m[root->val]++;
        inorder(m,root->right);
        return;
        
    }
    vector<int> findMode(TreeNode* root) {
        vector<int> ans;
        if(root==NULL)
            return ans;
        unordered_map<int,int> m;
        inorder(m,root);
        int temp=0;
        int first;
        for(auto it:m)
        {
            if(it.second>=temp)
            {
                first=it.first;
                temp=it.second;
            }
        }
        for(auto it:m)
        {
            if(it.second==temp)
                ans.push_back(it.first);
        }
        return ans;
    }
};