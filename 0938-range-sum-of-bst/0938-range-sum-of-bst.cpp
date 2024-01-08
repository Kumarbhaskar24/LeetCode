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
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(!root->left && !root->right)
        return root->val;


        queue<TreeNode*>q;
        q.push(root);

        int sum = 0;
        while(!q.empty())
        {
            TreeNode* curr = q.front();
            q.pop();
            int d = curr->val;

            if(d>=low && d<=high)
            sum +=d;

            if(curr->left)
            q.push(curr->left);

            if(curr->right)
            q.push(curr->right);
        }
        return sum;
    }
};