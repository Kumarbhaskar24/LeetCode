class Solution {
public:
    
    long long helper(int i,vector<vector<int>> &nums,vector<long long> &dp)
    {
        if(i>=nums.size())
            return 0;
        if(dp[i]!=-1)
            return dp[i];
        long long ans=0;
        long long temp=helper(i+nums[i][1]+1,nums,dp)+nums[i][0];
        long long temp2=helper(i+1,nums,dp);
        ans=max(temp,temp2);
        return dp[i]=ans;
        
    }
    long long mostPoints(vector<vector<int>>& nums) {
        vector<long long> dp(nums.size()+1,0);
        int n=nums.size();
        for(int i=n-1;i>=0;i--)
        {
            int points=nums[i][0],steps=nums[i][1];
            dp[i]=max(points+dp[min(i+steps+1,n)],dp[i+1]);
        }
        return dp[0];
        
        //return helper(0,questions,dp);   
    }
};