class Solution {
public:
    
    int solve(vector<vector<int>> &nums,int i,int j,vector<vector<int>> &dp)
    {
        if(i==0&&j==0)
            return 1;
        if(i<0||j<0)
            return 0;
        if(nums[i][j]==1)
            return 0;
        if(dp[i][j]!=-1)
            return dp[i][j];
        return dp[i][j]=solve(nums,i-1,j,dp)+solve(nums,i,j-1,dp);
        
    }
    
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n=obstacleGrid.size()-1;
        int m=obstacleGrid[0].size()-1;
        if(obstacleGrid[0][0]==1)
            return 0;
        vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
//         for(int i=0;i<n;i++)
//         {
//             for(int j=0;j<m;j++)
//             {
                
//             }
//         }
        return solve(obstacleGrid,n,m,dp);
    }
};