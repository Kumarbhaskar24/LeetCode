class Solution {
public:
    
    int solve(vector<vector<int>> &nums,int i,int j,int n,int m,vector<vector<int>> &dp)
    {
        if(i==n&&j==m)
            return 1;
        if(i>n||j>m)
            return 0;
        if(nums[i][j]==1)
            return 0;
        if(dp[i][j]!=-1)
            return dp[i][j];
        return dp[i][j]=solve(nums,i+1,j,n,m,dp)+solve(nums,i,j+1,n,m,dp);
        
    }
    
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n=obstacleGrid.size()-1;
        int m=obstacleGrid[0].size()-1;
        if(obstacleGrid[n][m]==1)
            return 0;
        vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
        return solve(obstacleGrid,0,0,n,m,dp);
    }
};