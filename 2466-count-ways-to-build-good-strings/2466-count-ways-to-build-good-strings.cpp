
class Solution {
public:
    int mod=1e9+7;
    int helper(int low,int high,int zero,int one,int len,vector<int> &dp)
    {
        if(len>high)
            return 0;
        if(dp[len]!=-1)
            return dp[len];
        long long b=helper(low,high,zero,one,len+zero,dp);
        if(zero+len>=low&&zero+len<=high)
            b++;
        long long a=helper(low,high,zero,one,len+one,dp);
        if(one+len>=low&&one+len<=high)
            a++;
        return dp[len]=(a+b)%mod;
    }
    
    
    int countGoodStrings(int low, int high, int zero, int one) {
        vector<int> dp(high+low,-1);
        return helper(low,high,zero,one,0,dp);
        
    }
};