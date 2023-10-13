class Solution {
public:
    int solve2(vector<int> cost, int n, vector<int> &dp){
        // memoization method
        // base case
        if(n == 0)
            dp[0] = cost[0];
        if(n == 1)
            dp[1] =  cost[1];
        
        if(dp[n] != -1)
            return dp[n];
        
        dp[n] = min(solve2(cost, n - 1, dp), solve2(cost, n - 2, dp)) + cost[n];
        return dp[n];
    }

    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> dp(n + 1, -1);
        return min(solve2(cost, n - 1, dp), solve2(cost, n - 2, dp));

    }
};