class Solution {
public:
    
    
    bool isvalid(int i,int j,int n,int m,vector<vector<char>> &grid)
    {
        if(i<n&&i>=0&&j>=0&&j<m&&grid[i][j]=='1')
            return true;
        return false;
    }
    
    
    void dfs(int i,int j,int n, int m,vector<vector<char>> &grid)
    {
        grid[i][j]=-1;
        int x[4]={1,-1,0,0};
        int y[4]={0,0,1,-1};
        for(int k=0;k<4;k++)
        {
            int nx=x[k]+i;
            int ny=y[k]+j;
            if(isvalid(nx,ny,n,m,grid))
            {
                dfs(nx,ny,n,m,grid);
            }
        }
    }
    
    
    
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int ans=0;    
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