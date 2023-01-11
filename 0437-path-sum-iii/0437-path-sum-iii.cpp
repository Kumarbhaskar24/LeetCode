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
//     void helper(TreeNode* root, int t,int sum)
//     {
//          if(root==NULL)
//             return ;
//         if(t>sum)
//             sum=sum+root->val;
//         if(sum==t)
//         {
//             cnt=cnt+1;
//             sum=0;
//            // cout<<"cnt"<<cnt<<endl;
//         }
//         if(sum>t)
//             sum=0;
//        // cout<<t<<" "<<sum<<endl;
//         helper(root->left,t,sum);
//         helper(root->right,t,sum);
        
//     }
        void dfs(TreeNode* root,long long t)
        {
            if(!root)
                return ;
            if(root->val==t)
                cnt++;
            dfs(root->left,t-root->val);
            dfs(root->right,t-root->val);
        
        }
        int pathSum(TreeNode* root, long long targetSum) {
        if(root==NULL)
            return 0;
            dfs(root,targetSum);
            pathSum(root->left,targetSum);
            pathSum(root->right,targetSum);
            return cnt;
    }
};