// class Solution {
// public:
//     int minCostClimbingStairs(vector<int>& cost) {
//         int n=cost.size()-1;
//         int dp[cost.size()+2];
//         for(int i=0;i<cost.size();i++)
//             dp[i]=cost[i];
            
//         dp[cost.size()]=0;
//         while(n>=0)
//         {
//            // cout<<n<<endl;
//             cout<<dp[n]<<" "<<dp[n+1]<<endl;
//            dp[n]= dp[n]+min(dp[n],dp[n+2]);
        
//             n--; 
//         }
//         return min(dp[0],dp[1]);
//     }
// };
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        int dp[n];
        dp[0]=cost[0];
        dp[1]=cost[1];
        for(int i=2;i<n;i++)
            dp[i]=min(dp[i-2],dp[i-1])+cost[i];
    
        return min(dp[n-1],dp[n-2]);
    }
};