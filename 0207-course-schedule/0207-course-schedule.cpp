class Solution {
public:
    bool dfs(int s,vector<vector<int>>& nums,vector<vector<int>> &adj,vector<bool> &vis,vector<bool> &dfsvis)
    {
        vis[s]=true;
        dfsvis[s]=true;
         vector<int> data=adj[s];
        for(auto it:data)
        {
            if(!vis[it])
            {
                if(dfs(it,nums,adj,vis,dfsvis))
                    return true;
            }
            if(vis[s]&&dfsvis[it])
                return true;
        }
        dfsvis[s]=false;
        return false;
    }
    
    bool canFinish(int numCourses, vector<vector<int>>& nums) {
        int n=numCourses;
        vector<bool> vis(n,false),dfsvis(n,false);
        vector<vector<int>> adj(n);
        for (auto x : nums) {
            int a = x[0];
            int b = x[1];
            adj[a].push_back(b);
        }
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                 if(dfs(i,nums,adj,vis,dfsvis))
                     return false;
            }
        }
        return true;
    }
};