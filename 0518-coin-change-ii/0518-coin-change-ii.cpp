class Solution {
public:
    int change(int amount, vector<int>& coins) {
      vector<int> dp(amount+1,0);
        dp[0]=1;
        int ans=0;
        int n=coins.size();
        for(int j=coins.size()-1;j>=0;j--)
        {
            for(int i=1;i<dp.size();i++)
            {
                if(i>=coins[j])
                {
                    dp[i]=dp[i-coins[j]]+dp[i];
                }
            }
        }
        return dp[amount];
    }
};

//  int dp[coins.size()][amount.size()];
//         dp[0][0]=0;
//         for(int i=0;i<coins.size();i++)
//         {
//             for(int j=1;j<amount.size();j++)
//             {
//                 dp[coins[i]][j]=dp[coins[i]][j-coins[i]]+dp[coins[i]-1][j];
//             }
//         }
//         return dp[coins.size()][amount];
//     }
// };