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
    
    
    int solve_BottomUP(vector<vector<int>> &nums)
    {
        vector<vector<int>> dp(nums.size(),vector<int>(nums[0].size(),nums[0][0]));
        int m=nums.size();
        int n=nums[0].size();
        for(int i=1;i<m;i++)
            dp[i][0]=dp[i-1][0]+nums[i][0];
        for(int j=1;j<n;j++)
            dp[0][j]=dp[0][j-1]+nums[0][j];
        for(int i=1;i<m;i++)
        {
            for(int j=1;j<n;j++)
            {
                dp[i][j]=min(dp[i-1][j],dp[i][j-1])+nums[i][j];
            }
        }
        return dp[m-1][n-1];
    }
    
    
    int minPathSum(vector<vector<int>>& grid) {
        //vector<vector<int>> dp(grid.size(),vector<int> (grid[0].size(),-1));
        //return solve(grid,0,0,0,dp);
        return solve_BottomUP(grid);
    }
};