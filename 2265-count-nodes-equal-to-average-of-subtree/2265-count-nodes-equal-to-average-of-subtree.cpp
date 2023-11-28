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
    int cnt=0;
    pair<int,int> helper(TreeNode* root)
    {
        if(root == NULL)
            return {0,0};
        int nodeCount = 1;
        int subTreeSum = root->val;
        pair<int,int> leftSubTree = helper(root->left);
        pair<int,int> rightSubTree = helper(root->right);
        subTreeSum += leftSubTree.first+rightSubTree.first;
        nodeCount += leftSubTree.second+rightSubTree.second;
        
        if((subTreeSum/nodeCount) == root->val)
            cnt++;
        
        return {subTreeSum,nodeCount};
    }
    
    int averageOfSubtree(TreeNode* root) {
        helper(root);
        return cnt;
    }
};