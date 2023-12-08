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
    vector <int>v;
    void dfs(TreeNode* root){
        if (root == NULL){
            return ;
        }
        if (root -> left==NULL && root -> right==NULL){
            v.push_back(root->val);
            return;
        }
        dfs(root->left);
        dfs(root->right);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        v.clear();
        vector<int>v1;
        dfs(root1);
        for (int i : v){
            v1.push_back(i);
        }
        v.clear();
        vector<int>v2;
        dfs(root2);
        for (int j: v){
              v2.push_back(j);
        }
        while (v2.size()==v1.size()){
            for (int k=0; k<v1.size(); k++){
               if( v1[k]!=v2[k]){
                 return false;
                }
            }
            return true;
        }
        return false;
    }
};