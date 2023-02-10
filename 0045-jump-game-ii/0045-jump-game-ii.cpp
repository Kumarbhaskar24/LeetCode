class Solution {
public:
    long long int solve(vector<int> &nums,vector<int> &dp,int i)
    {
        if(i==nums.size()-1)
            return 0;
        if(dp[i]!=-1)
            return dp[i];
        long long int mini=INT_MAX;
        for(int j=1;j<=nums[i];j++)
        {
            if(i+j>nums.size()-1)
                break;
            mini=min(mini,1+solve(nums,dp,i+j));
        }
        dp[i]=mini;
        return mini;
    }
    int jump(vector<int>& nums) {
        vector<int> dp(nums.size()+1,-1);
        return solve(nums,dp,0);
    }
};