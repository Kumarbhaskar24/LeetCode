class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
    {
//        vector<vector<int>> dp(coins.size(),vector<int> (amount+1,0));

//     for(int i=1;i<coins.size();i++)
//     {
//         for(int j=1;j<=amount;j++)
//         {
//             if(j<coins[i])
//                 dp[i][j]=dp[i-1][j];
//             else
//                 dp[i][j]=dp[i][j-coins[i-1]]+1;        
//         }
//     }
//     return dp[coins.size()-1][amount];
    }
        
        
        vector<int> dp(amount+1,amount+1);
        dp[0]=0;
        for(int i=1;i<=amount;i++)
        {
            for(int j=0;j<coins.size();j++)
                if(coins[j]<=i)
                    dp[i]=min(dp[i],dp[i-coins[j]]+1);
        }
        return dp[amount]>amount?-1:dp[amount];
    }
};