class Solution {
public:
    
    int solve(string word1, string word2,int i,int j,vector<vector<int>> &dp)
    {
        if(i<0&&j<0)
            return 0;
        else if(i>=0&&j<0)
            return i+1;
        else if(j>=0&&i<0) 
            return j+1;
        if(word1[i]==word2[j])
            return dp[i][j]=solve(word1,word2,i-1,j-1,dp);
        if(dp[i][j]!=-1)
            return dp[i][j];
        return dp[i][j]= min(solve(word1,word2,i-1,j-1,dp),min(solve(word1,word2,i-1,j,dp),solve(word1,word2,i,j-1,dp)))+1;
    }
    
    
    int minDistance(string word1, string word2) {
            vector<vector<int>> dp(word1.size(),vector<int>(word2.size(),-1));
            return solve(word1,word2,word1.size()-1,word2.size()-1,dp);
    }
};