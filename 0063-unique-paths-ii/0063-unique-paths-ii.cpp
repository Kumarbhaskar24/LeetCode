class Solution {
public:
    int helper(vector<vector<int>> &grid,int n,int m,int i,int j,vector<vector<int>> &dp)
    {
        if(i>=n||j>=m||grid[i][j]==1)
        {
            return 0;
        }
        if(dp[i][j]!=-1)
            return dp[i][j];
        if(i==n-1&&j==m-1)
            return 1;
        return dp[i][j]= helper(grid,n,m,i+1,j,dp)+helper(grid,n,m,i,j+1,dp);
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n=obstacleGrid.size();
        int m=obstacleGrid[0].size();
        vector<vector<int>> dp(n,vector<int>(m,-1));
        return helper(obstacleGrid,n,m,0,0,dp);
    }
};