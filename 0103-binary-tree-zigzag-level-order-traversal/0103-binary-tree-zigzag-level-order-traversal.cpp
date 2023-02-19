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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector <int>> ans;
        int j=0;
        if(root==NULL)
        {
            return ans;
        }
        queue<TreeNode*> q;                   
        q.push(root);
        
        while(!q.empty())
        {
            vector<int> curr;
            int s=q.size();
            for(int i=0;i<s;i++)
            {
                TreeNode* temp=q.front();
                q.pop();
                curr.push_back(temp->val);
                if(temp->left)q.push(temp->left);
                if(temp->right)q.push(temp->right);
            }
            if(j%2==0)
            {
                ans.push_back(curr);
            }
            else{
                reverse(curr.begin(),curr.end());
                ans.push_back(curr);
            }
            j++;
        }
        return ans;
    }
};