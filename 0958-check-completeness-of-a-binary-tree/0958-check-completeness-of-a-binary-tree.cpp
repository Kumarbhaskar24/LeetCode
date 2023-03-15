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
    
//     bool solve(TreeNode* root)
//     {
//         if(!root)
//             return true;
//         if(root->left==NULL&&root->right!=NULL)
//             return false;
//         return solve(root->left)&&solve(root->right);
//     }
    
    bool isCompleteTree(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        bool prev=true;
        while(!q.empty())
        {
            int s=q.size();
            for(int i=0;i<s;i++)
            {
                TreeNode* temp=q.front();
                q.pop();
                // if(temp->left==NULL&&temp->right!=NULL)
                //     return false;
                // //cout<<i<<" "<<s-1<<endl;
                // if(!q.empty()&&(temp->right==NULL&&temp->left!=NULL)&&i!=s-1)
                //     return false;
                if(temp==NULL)
                    prev=false;
                else{
                    if(prev==false)
                        return false;
                    q.push(temp->left);
                    q.push(temp->right);
                }
            }
        }
        return true;
    }
};