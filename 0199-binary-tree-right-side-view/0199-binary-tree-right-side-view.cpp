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
    vector<int> rightSideView(TreeNode* root) {
        queue<TreeNode*> q;
        vector<int> v;
        if(root==NULL)
            return v;
        q.push(root);
        while(!q.empty())
        {
            int s=q.size();
          for(int i=0;i<s;i++)
          {
             TreeNode* temp=q.front();
             q.pop();
             if(i==s-1)
             v.push_back(temp->val);
             if(temp->left)
                 q.push(temp->left);
              if(temp->right)
                  q.push(temp->right); 
              
          } 
        }
        return v;
    }
};