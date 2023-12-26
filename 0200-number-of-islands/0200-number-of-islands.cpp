class Solution {
public: 
    void dfs(int i,int j,int n,int m,vector<vector<char>> &grid)
    {
        grid[i][j]=-1;
        int x[4]={0,0,1,-1};
        int y[4]={1,-1,0,0};
        for(int k=0;k<4;k++)
        {
            int nx=x[k]+i;
            int ny=y[k]+j;
            if(nx>=0&&nx<n&&ny>=0&&ny<m&&grid[nx][ny]=='1')
            {
                dfs(nx,ny,n,m,grid);
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int ans=0;
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]=='1')
                {
                    dfs(i,j,n,m,grid);
                    ans++;
                }
            }
        }
        return ans;
    }
};