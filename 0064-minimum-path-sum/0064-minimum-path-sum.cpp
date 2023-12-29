class Solution {
public:
    int helper(vector<vector<int>>& grid,int n,int m,int i,int j,vector<vector<int>> &dp)
    {
        if(i>=n||j>=m)
            return 1e9;
        if(dp[i][j]!=-1)
            return dp[i][j];
        if(i==n-1&&j==m-1)
            return grid[i][j];
        int right = helper(grid,n,m,i+1,j,dp)+grid[i][j]; 
        int bottom = helper(grid,n,m,i,j+1,dp)+grid[i][j];
        return dp[i][j]=min(right,bottom);
    }
    
    int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> dp(n,vector<int>(m,-1));
        return helper(grid,n,m,0,0,dp);
    }
};