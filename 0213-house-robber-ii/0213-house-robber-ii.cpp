class Solution {
public:
    int helper(vector<int> nums,int s,int e)
    {
        vector<int> dp(e+1,0);
        dp[s]=nums[s];
        dp[s+1]=max(nums[s],nums[s+1]);
        for(int i=s+2;i<e;i++)
        {
            dp[i]=max(nums[i]+dp[i-2],dp[i-1]);
        }
        return dp[e-1];
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==0)
            return 0;
        if(n==1)
            return nums[0];
        if(n==2)
            return max(nums[0],nums[1]);
        return max(helper(nums,0,n-1),helper(nums,1,n));
    }
};