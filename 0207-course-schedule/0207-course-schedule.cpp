class Solution {
public:
    
    bool iscycle(int i,vector<vector<int>>& nums,vector<bool> &vis,vector<bool> &dfsvis,vector<vector<int>> &adj)
    {
        vis[i]=true;
        dfsvis[i]=true;
        vector<int> data=adj[i];
        for(auto it:data)
        {
            if(!vis[it])
            {
                if(iscycle(it,nums,vis,dfsvis,adj))
                    return true;
            }
            else if(dfsvis[it]&&vis[it])
                return true;           
        }
        dfsvis[i]=false;
        return false;
        
    }
    
    
    bool canFinish(int n, vector<vector<int>>& prerequisites) {
        vector<bool> vis(n,false);
        vector<bool> dfsvis(n,false);
        vector<vector<int>> adj(n);
        for(auto it:prerequisites)
        {
            adj[it[0]].push_back(it[1]);
        }
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
                if(iscycle(i,prerequisites,vis,dfsvis,adj))
                    return false;
        }
        return true;
    }
};