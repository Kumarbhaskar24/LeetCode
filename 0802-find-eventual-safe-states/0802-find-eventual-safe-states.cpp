class Solution {
public:
    
    bool dfs(int s,vector<vector<int>> &graph,vector<bool> &vis,vector<bool> &dfsvis,vector<bool> &iscycle)
    {
        vis[s]=true;
        dfsvis[s]=true;
        
        for(auto it:graph[s])
        {
            if(!vis[it])
            {
                if(dfs(it,graph,vis,dfsvis,iscycle))
                {
                    return iscycle[s]=true;
                }
            }
            else if(vis[it]&&dfsvis[it])
            {
                return iscycle[s]=true;
            }
        }
        dfsvis[s]=false;
        return false;
    }
    
    
    
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<bool> vis(n,false),dfsvis(n,false);
        vector<bool> iscycle(n,false);
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                dfs(i,graph,vis,dfsvis,iscycle);
            }
        }
        for(int i=0;i<n;i++)
        {
            if(!iscycle[i])
                ans.push_back(i);
        }
        return ans;
    }
};