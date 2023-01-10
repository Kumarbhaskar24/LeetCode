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

    //     int maxi=INT_MIN;
//     int helper(TreeNode* root)
//     {
//         if(root==NULL)
//             return 0;
//         //maxi+=root->val;
//         int l= helper(root->left);
//         int r= helper(root->right);
//         cout<<l<<" "<<r<<" "<<root->val<<endl;
//         // if(l+r>maxi)
//         //     maxi=l+r;
//         maxi=max(l,r);
//         cout<<maxi<<endl;
//         //maxi-=root->val;
//         return max(root->val+l+r,maxi);
        
//     }
//     int maxPathSum(TreeNode* root) {
//        return helper(root);
//        // return maxi;
            
//     }

    int max_sum=INT_MIN;
    int max_gain(TreeNode* root)
    {
        if(!root)return 0;
        int l=max(max_gain(root->left),0);
        int r=max(max_gain(root->right),0);
        int new_price=root->val+l+r;
        max_sum=max(max_sum,new_price);
        return root->val+max(l,r);
    }
    int maxPathSum(TreeNode* root) {
        max_gain(root);
        return max_sum;
    }
};