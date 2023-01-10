class Solution {
public:

    int climbStairs(int n) {
    int dp[n+1];
        dp[n]=1;
        dp[n-1]=1;
        n=n-2;
        while(n>=0){
            dp[n]=dp[n+1]+dp[n+2];
            n--;
        }
        return dp[0];
        
    }
};