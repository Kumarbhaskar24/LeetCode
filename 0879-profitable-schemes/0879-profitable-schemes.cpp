class Solution {
public:
    
    int mod= 1e9+7;
    
    int solve(int i,int n,int mp,vector<int>& group,vector<int>& profit,vector<vector<vector<int>>> &dp)
    {
        if(i==group.size())
            return mp<=0;
        
        
        if(mp<=0 && dp[n][i][0] !=-1) return dp[n][i][0]; //condensing all extra states to one state
        else if(mp>0 && dp[n][i][mp] !=-1) return dp[n][i][mp];
        
        
        int ans=0;
        
        ans+=solve(i+1,n,mp,group,profit,dp)%mod ; //skip condition 
        
        if(n>=group[i])
        {
            ans+=solve(i+1,n-group[i],mp-profit[i],group,profit,dp)%mod;
        }
        if(mp<=0)
            return dp[n][i][0]= ans% mod;
        return dp[n][i][mp]=ans%mod;
    }
    
    
    int profitableSchemes(int n, int minProfit, vector<int>& group, vector<int>& profit) {
        vector<vector<vector<int>>> dp(n+1,vector<vector<int>>(group.size(), vector<int>(101,-1)));
        return solve(0,n,minProfit,group,profit,dp);
        
    }
};