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
   // {
        // int height(TreeNode* root)
    // {
    //     if(root==NULL)
    //         return 0;
    //     return max(height(root->left),height(root->right))+1;
    // }
    // int helper(TreeNode* root,int h,int sum,int ans)
    // {
    //     if(root==NULL)
    //         return 0;
    //         h--;
    //         sum=sum+(root->val*pow(10,h));
    //         cout<<"Sum ="<<sum<<endl;
    //         helper(root->left,h,sum,ans);
    //         cout<<"Sum after left ="<<sum<<endl;
    //     //    ans=ans+sum;
    //        // sum=sum-(root->val*pow(10,h));
    //         cout<<"Sum before right ="<<sum<<endl;
    //         helper(root->right,h,sum,ans);
    //         ans=ans+sum;
    //      cout<<"ans after right ="<<ans<<endl;
    //    return ans;
    // }
  //  }
    int sumNumbers(TreeNode* root) {
        if(root==NULL)
            return 0;
        queue<pair<TreeNode*,int>> q;
        q.push({root,0});
        int ans=0;
        while(q.size())
        {
            auto [n,num]=q.front();
            q.pop();
            num=num*10+n->val;
            if(n->left)
                q.push({n->left,num});
            if(n->right)
                q.push({n->right,num});
            if(!n->left&&!n->right)
                ans+=num;
        }
            return ans;
    }
};