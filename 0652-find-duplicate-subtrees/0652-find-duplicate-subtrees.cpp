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
    
    //map<int,TreeNode*> m;
//     vector<TreeNode*> ans;
//     bool check(TreeNode* root1,TreeNode* root2)
//     {
        
//         if(root1==NULL&&root2==NULL)
//             return true;
//         if((root1==NULL&&root2!=NULL)||(root2==NULL&&root1!=NULL))
//             return false;
//         if(root1->val!=root2->val)
//             return false;
//         check(root1->left,root2->left);
//         check(root1->right,root2->right);
//         return true;
//     }
    
//     void helper(TreeNode* root)
//     {
//         if(root==NULL)
//             return;
//         if(m[root->val])
//         {
//             if(check(m.at(root->val),root))
//             {
//                 int cnt=0;
//                 for(auto it:ans)
//                     {
//                     cout<<it->val<<" ";
//                     if(it->val==root->val)
//                         cnt++;
//                     }
//                 if(cnt==0)
//                     ans.push_back(root);
//             }
//         }
//         m[root->val]=root;
//         helper(root->left);
//         helper(root->right);
//         return;
//     }
//     vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
//         if(root==NULL)
//             return ans;
//         TreeNode* temp=root;
//         helper(root);
//         return ans;
//     }

     vector<TreeNode*> ans;
      unordered_map<string, int>mymap;
  string helper(TreeNode* root)
    {
        if(root == NULL) return "";
        
        string l= helper(root->left);
        string r= helper(root->right);
        string s = "(" + l + to_string(root->val) + r + ")"; 
        if(mymap[s]!=-1) mymap[s]++; 
      
      if(mymap[s]>1) 
      {
          ans.push_back(root);
          mymap[s]=-1;
      }
      return s; 
    }
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
      helper(root);
        return ans;
    }
};