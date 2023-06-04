class Solution {
public:
    
    
    void dfs(int i,int n,vector<vector<int>> &c,vector<bool> &isvisited)
    {
        isvisited[i]=true;
        vector<int> adj;
        for(int l=0;l<n;l++)
        {
            int x=c[i][l];
            if(x==1)
                adj.push_back(l);
        }
        for(auto it:adj)
        {
            if(!isvisited[it])
            {
                dfs(it,n,c,isvisited);
            }
        }
        
        return;
    }
    
    
    int findCircleNum(vector<vector<int>>& c) {
        int n=c.size();
        int cnt=0;
        vector<bool> isvisited(n,false);
        for(int i=0;i<n;i++)
        {
            if(!isvisited[i])
            {
                cnt++;
                dfs(i,n,c,isvisited);
            }
            
        }
        return cnt;
    }
};