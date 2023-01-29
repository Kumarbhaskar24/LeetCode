class Solution {
public:
    int ans=1;
    int helper(vector<int> &nums)
    {
        vector<int> dp(nums.size(),1);
        for(int i=0;i<nums.size();i++)
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[j]>nums[i])
                {
                    dp[j]=max(dp[j],dp[i]+1);
                    ans=max(ans,dp[j]);
                }
            }
        return ans;
    }
    int lengthOfLIS(vector<int>& nums) {
        
        return helper(nums);
    }
};