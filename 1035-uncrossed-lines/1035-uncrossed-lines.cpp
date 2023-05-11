class Solution {
public:
    
   
    int helper(int i,int j,vector<int> &num1,vector<int> &num2,vector<vector<int>>&dp)
    {
        int ans=0;
        if(i>=num1.size()||j>=num2.size())
            return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        
        if(num1[i]==num2[j])
            ans=helper(i+1,j+1,num1,num2,dp)+1;
        ans=max({ans,helper(i,j+1,num1,num2,dp),helper(i+1,j,num1,num2,dp)});
        dp[i][j]=ans;
    return ans;
    }
    
    
    
    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>>dp(nums1.size(),vector<int>(nums2.size(),-1));
        return helper(0,0,nums1,nums2,dp);
        
    }
};