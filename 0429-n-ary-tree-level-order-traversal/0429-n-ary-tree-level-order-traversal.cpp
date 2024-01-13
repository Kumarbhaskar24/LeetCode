/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        if(!root){
            return {};
        }
        queue<Node*> qq;
        qq.push(root);
        vector<vector<int>> ans;
        while(!qq.empty()){
            int n= qq.size();
            vector<int> tmp;
            for(int i =0;i<n;i++){
                Node* fr = qq.front();
                for(auto j:fr->children){
                    qq.push(j);
                }
                tmp.push_back(fr->val);
                qq.pop();
            }
            ans.push_back(tmp);
        }
        return ans;
    }
};