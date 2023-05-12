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
    long long mostPoints(vector<vector<int>>& questions) {
        vector<long long> dp(questions.size()+1,-1);
        return helper(0,questions,dp);   
    }
};