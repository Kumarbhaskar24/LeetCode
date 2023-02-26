class Solution {
public:
    
    void solve(int i,int j,vector<vector<char>> &grid,vector<vector<int>> &vis)
    {
        int m=grid.size();
        int n=grid[0].size();
        queue<pair<int,int>> q;
        q.push({i,j});            
        while(!q.empty())
        {
            int r=q.front().first;
            int c=q.front().second;
            q.pop();
            vector<vector<int>> coord={{-1,0},{0,-1},{1,0},{0,1}};
            for(int k=0;k<4;k++)        
            {
                int nrow=r+coord[k][0];
                int ncol=c+coord[k][1];
                if(nrow>=0&&nrow<m&&ncol<n&&ncol>=0&&grid[nrow][ncol]=='1'&&!vis[nrow][ncol])
                {
                    q.push({nrow,ncol});
                    vis[nrow][ncol]=1;
                }
            }
        }
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int cnt=0;
        vector<vector<int>> vis(m,vector<int>(n,0));
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(!vis[i][j]&&grid[i][j]=='1')
                {
                    cnt++;
                    solve(i,j,grid,vis);
                }
            }
        }
        return cnt;
    }
};