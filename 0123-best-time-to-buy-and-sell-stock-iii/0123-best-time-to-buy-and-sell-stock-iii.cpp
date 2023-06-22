class Solution {
public:
    
    int helper(int i,vector<int> &p,int buy,int cnt,vector<vector<vector<int>>> &dp)
    {
        if(i==p.size()||cnt==2)
            return 0;
        if(dp[i][buy][cnt]!=-1)
            return dp[i][buy][cnt];
        if(buy)
        {
            int buystock=-p[i]+helper(i+1,p,0,cnt,dp);
            int notbuy=helper(i+1,p,1,cnt,dp);
            return dp[i][buy][cnt]=max(buystock,notbuy);
        }
        else{
            int sellstock=p[i]+helper(i+1,p,1,cnt+1,dp);
            int notsell=helper(i+1,p,0,cnt,dp);
            return dp[i][buy][cnt]=max(sellstock,notsell);
        }
        return 0;
    }
    
    
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<vector<int>>> dp (n,vector<vector<int>>(2,vector<int>(3,-1)));
        return helper(0,prices,1,0,dp);
    }
};