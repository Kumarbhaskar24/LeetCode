class Solution {
public:
    
    int helper(int i,int buy,vector<int> &p,int fee,int n,vector<vector<int>> &dp)
    {
        if(i==n)
            return 0;
        if(dp[i][buy]!=-1)
            return dp[i][buy];
        if(buy)
        {
            int buystock=-p[i]+helper(i+1,0,p,fee,n,dp);
            int notbuy=helper(i+1,1,p,fee,n,dp);
            return dp[i][buy]=max(buystock,notbuy);
        }
        else{
            int sellstock=p[i]-fee+helper(i+1,1,p,fee,n,dp);
            int notsell=helper(i+1,0,p,fee,n,dp);
            return dp[i][buy]=max(sellstock,notsell);
        }
        return 0;
    }
    
    int maxProfit(vector<int>& prices, int fee) {
        int n=prices.size();
        vector<vector<int>> dp(n,vector<int> (2,-1));
        return helper(0,1,prices,fee,n,dp);
    }
};