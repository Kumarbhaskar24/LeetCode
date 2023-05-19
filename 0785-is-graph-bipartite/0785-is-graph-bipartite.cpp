class Solution {
public:
    
    bool dfs(int i,vector<vector<int>> &graph,vector<int> &col)
    {
        if(col[i]==-1)
            col[i]=1;
        
        for(auto it:graph[i])
        {
            if(col[it]==-1)
            {
                col[it]=1-col[i];
                if(!dfs(it,graph,col))
                    return false;
            }
            else if(col[it]==col[i])
                return false;
        }
        return true;
            
    }
    
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int> col(n+1,-1);
        for(int i=0;i<n;i++)
        {
            if(col[i]==-1)
            {
                col[i]=1;
                if(!dfs(i,graph,col))
                    return false;
            }
        }
        return true;
        
    }
};