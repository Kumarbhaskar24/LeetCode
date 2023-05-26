class Solution {
public:
    int solve(int i,int j,vector<int> &piles,int alice,int bob,int chance,vector<vector<int>> &dp)
    {
        if(i>j)
        {
            return 0;
        }
        if(dp[i][j]!=-1)
            return dp[i][j];
        if(chance==0)
        {
            dp[i][j]=max(solve(i+1,j,piles,alice,bob,1,dp)+piles[i],solve(i,j-1,piles,alice,bob,1,dp)+piles[j]); 
        }
        else{
            dp[i][j]= max(solve(i+1,j,piles,alice,bob,0,dp)+piles[i],solve(i,j-1,piles,alice,bob,0,dp)+piles[j]); 
        }
        return dp[i][j];
    }
    
    
    bool stoneGame(vector<int>& piles) {
        int i=0;
        int j=piles.size()-1;
        int n=piles.size();
        vector<vector<int>> dp(n,vector<int>(n,-1));
        return solve(i,j,piles,0,0,0,dp)>0?true:false;
    }
};