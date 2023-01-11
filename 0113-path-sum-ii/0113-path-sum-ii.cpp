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
   void helper(TreeNode* root,int sum,vector<int> &path,vector<vector<int>> &ans)
   {
       if(!root)
       {
       return ; 
       }
       path.push_back(root->val);
       
       if (root->left==NULL&&root->right==NULL&&sum==root->val)
       {
        ans.push_back(path);
       }
       helper(root->left,sum-root->val,path,ans);
       helper(root->right,sum-root->val,path,ans);
       path.pop_back();
   }
vector<vector<int>> pathSum(TreeNode* root, int sum) {
     vector<vector<int>> ans;
     vector<int> temp;
        helper(root,sum,temp,ans);
        return ans;
    
    } 
};