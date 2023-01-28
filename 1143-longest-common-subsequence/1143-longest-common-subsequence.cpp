class Solution {
public:
    int lcs(string a,string b,int i,int j,vector<vector<int>> &dp)
    {
        if(i==a.size()||j==b.size())
            return 0;
        if(dp[i][j]!=-1)
            return dp[i][j];
        int ans=0;   
        if(a[i]==b[j])
            ans= 1+lcs(a,b,i+1,j+1,dp);
        else 
            ans= dp[i][j]= max(lcs(a,b,i+1,j,dp),lcs(a,b,i,j+1,dp));
        return dp[i][j]=ans;
    }
    
    
    int lcs_tab(string a,string b,vector<vector<int>> &dp){
        for(int i=a.size()-1;i>=0;i--)
        {
            for(int j=b.size()-1;j>=0;j--)
            {
               if(a[i]==b[j])
                  dp[i][j]= 1+dp[i+1][j+1];
               else 
                  dp[i][j]= max(dp[i+1][j],dp[i][j+1]);
            }
        }
        return dp[0][0];
    }
    
    
    int longestCommonSubsequence(string text1, string text2) {
         vector<vector<int>> dp(text1.size()+1,vector<int> (text2.size()+1,0));
        //return lcs(text1,text2,0,0,dp);
        return lcs_tab(text1,text2,dp);
    }
};