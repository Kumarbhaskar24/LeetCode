class Solution {
public:
    
    bool isvalid(int i,int j,int n,int m,vector<vector<int>> &grid)
    {
        if(i<n&&i>=0&&j>=0&&j<m&&grid[i][j]==1)
            return true;
        return false;
    }
    
    
    int dfs(int i,int j,int n, int m,vector<vector<int>> &grid)
    {
        int temp=1;
        grid[i][j]=-1;
        int x[4]={1,-1,0,0};
        int y[4]={0,0,1,-1};
        for(int k=0;k<4;k++)
        {
            int nx=x[k]+i;
            int ny=y[k]+j;
            if(isvalid(nx,ny,n,m,grid))
            {
                temp+=dfs(nx,ny,n,m,grid);
            }
        }
        return temp;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();   
        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                {
                    ans=max(ans,dfs(i,j,n,m,grid));
                }
                
            }
        }
        return ans;
    }
};
