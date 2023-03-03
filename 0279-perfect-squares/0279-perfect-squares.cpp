class Solution {
public:
    
    int solve(int n,vector<int> &dp)
    {
        if(n==0)
            return 0;
        if(dp[n]!=-1)
            return dp[n];
        int ans=n;
        for(int i=1;i*i<=n;i++)
        {
            int temp=i*i;
            ans=min(ans,solve(n-temp,dp)+1);
            dp[n]=ans;
        }
        return ans;
    }
    int numSquares(int n) {
        vector<int> dp(n+1,-1);
        return solve(n,dp);
    }
};