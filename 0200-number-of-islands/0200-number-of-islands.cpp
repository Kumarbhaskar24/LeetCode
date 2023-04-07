class Solution {
public:
    
    bool isValid(int i,int j,int n,int m,vector<vector<char>> &grid)
    {
        if(i>=0&&i<n&&j>=0&&j<m&&grid[i][j]=='1')
            return true;
        return false;
    }
    
    void dfs(int i,int j,int n,int m,vector<vector<char>> &grid)
    {
        grid[i][j]='B';
        int ax[4]={1,-1,0,0};
        int ay[4]={0,0,1,-1};
        for(int k=0;k<4;k++)
        {
            int nx=i+ax[k];
            int ny=j+ay[k];
            if(isValid(nx,ny,n,m,grid))
            {
                dfs(nx,ny,n,m,grid);
            }
        }
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int ans=0;
        // for(int i=0;i<n;i++)
        //     for(int j=0;j<m;j++)
        //         if(i*j==0||i==n-1||j==m-1)
        //             if(grid[i][j]=='1')
        //             { 
        //                 ans++;
        //                 dfs(i,j,n,m,grid);
        //             }

        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
              if(grid[i][j]=='1')
                {
                    ans++;
                    dfs(i,j,n,m,grid);
                }
 
        return ans;
    }
};