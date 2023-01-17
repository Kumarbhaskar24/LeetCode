
class Solution {
public:

//     int helper(int s,int e,vector<int> &cuts)
//     {
//         if(s>e)
//             return 0;
//         int mini=INT_MAX;
//         for(int i=s;i<=e;i++)
//         {
//             int cost=cuts[e+1]-cuts[s-1]+helper(s,i-1,cuts)+helper(i+1,e,cuts);
//             if(cost<mini)
//                 mini=cost;
//             //mini=min(mini,cost);
//         }
//         return mini;
//     }
    
//     int minCost(int n, vector<int>& cuts) {
//         cuts.push_back(n);
//         cuts.push_back(0);
//         sort(cuts.begin(),cuts.end());
//         return helper(1,cuts.size(),cuts);
//     }
// };



int dp[102][102] = {};
int dfs(vector<int>& cuts, int i, int j) {
    if (j - i <= 1)
        return 0;
    if (!dp[i][j]) {
        dp[i][j] = INT_MAX;
        for (auto k = i + 1; k < j; ++k)
            dp[i][j] = min(dp[i][j], 
                cuts[j] - cuts[i] + dfs(cuts, i, k) + dfs(cuts, k, j));
    }
    return dp[i][j];
}
int minCost(int n, vector<int>& cuts) {
    cuts.push_back(0);
    cuts.push_back(n);
    sort(begin(cuts), end(cuts));
    return dfs(cuts, 0, cuts.size() - 1);
}
};