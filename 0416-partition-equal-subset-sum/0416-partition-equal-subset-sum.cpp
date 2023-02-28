class Solution {
public:
    vector<int> temp;
    bool check(vector<int> &nums,int i,int sum,vector<vector<int>> &dp)
    {
        if(sum==0)
            return true;
        if(i>=nums.size()||sum<0)
            return false;
        if(dp[i][sum]!=-1)
            return dp[i][sum];
        return dp[i][sum]=check(nums,i+1,sum-nums[i],dp)||check(nums,i+1,sum,dp);
    }
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(auto it:nums)
            sum+=it;
        if(sum%2)
            return false;
        vector<vector<int>>dp(nums.size(),vector<int>(sum+1,-1));
        return check(nums,0,sum/2,dp);
    }
};