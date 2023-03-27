class Solution {
public:
    
    int mini=INT_MAX;
    int solve(vector<vector<int>> &nums,int i,int j,int sum,vector<vector<int>> &dp)
    {
        if(i>=nums.size()||j>=nums[0].size())
            return 0;
        sum+=nums[i][j];
        if(dp[i][j]!=-1&&dp[i][j]<=sum)
            return dp[i][j];
        dp[i][j]=sum;
        solve(nums,i+1,j,sum,dp);
        solve(nums,i,j+1,sum,dp);
        if(i==nums.size()-1&&j==nums[0].size()-1)
            mini=min(mini,sum);
        return mini;
    }
    
    
    int minPathSum(vector<vector<int>>& grid) {
        vector<vector<int>> dp(grid.size(),vector<int> (grid[0].size(),-1));
        return solve(grid,0,0,0,dp);
    }
};