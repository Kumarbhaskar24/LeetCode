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
    
    unordered_map<TreeNode*,TreeNode*> parent;
    void helper(TreeNode* root)
    {
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            int s=q.size();
            for(int i=0;i<s;i++)
            {
                TreeNode* fr= q.front();
                q.pop();
                if(fr->left)
                {
                    q.push(fr->left);
                    parent[fr->left]=fr;
                }
                if(fr->right)
                {
                    q.push(fr->right);
                    parent[fr->right]=fr;
                }
            }
        }
        return;
    }
    
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        helper(root);
        queue<TreeNode*> q;
        vector<int> ans;
        unordered_map<TreeNode*, bool> vis;
        vis[target]=true;
        int cnt=0;
        q.push(target);
        while(!q.empty())
        {
            int s=q.size();
            if(cnt++==k)
                break;
            for(int i=0;i<s;i++)
            {
                TreeNode* fr = q.front();
                q.pop();
                if(fr->left&&!vis[fr->left])
                {
                    q.push(fr->left);
                    vis[fr->left]=true;
                }
                if(fr->right&&!vis[fr->right])
                {
                    q.push(fr->right);
                    vis[fr->right]=true;
                }
                if(parent[fr]&&!vis[parent[fr]])
                {
                    q.push(parent[fr]);
                    vis[parent[fr]]=true;
                }
            }
        }
        while(!q.empty())
        {
            TreeNode* fr = q.front();
            q.pop();
            ans.push_back(fr->val);
        }
        return ans;
    }
};