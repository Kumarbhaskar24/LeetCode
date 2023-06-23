class Solution {
public:
    
    int solve(int i,int prev,vector<int> &nums,vector<vector<int>> &dp)
    {
        if(i==nums.size())
            return 0;
        if(dp[i][prev+1]!=-1)
            return dp[i][prev+1];
        int take=0;
        if(prev==-1||nums[i]>nums[prev])
        {
            take=1+solve(i+1,i,nums,dp);
        }
        int nottake=0;
            nottake=solve(i+1,prev,nums,dp);
        return dp[i][prev+1]= max(take,nottake);
    }
    
    
    int solveTab(vector<int> &nums)
    {
        //vector<vector<int>> dp(nums.size()+1,vector<int> (nums.size()+1,0));
        int n=nums.size();
        vector<int> curr(n+1,0);
        vector<int> prv(n+1,0);
        
        for(int i=n-1;i>=0;i--)
        {
            for(int prev=i-1;prev>=-1;prev--)
            {
                int take=0;
                if(prev==-1||nums[i]>nums[prev])
                {
                    take=1+curr[i+1];
                }
                int nottake=0;
                    nottake=curr[prev+1];
                prv[prev+1]= max(take,nottake);
            }
            curr=prv;
        }
        return curr[0];
    }
    
    int lengthOfLIS(vector<int>& nums) {
        //vector<vector<int>> dp(nums.size()+1,vector<int> (nums.size()+1,-1));
        //return solve(0,-1,nums,dp);      
        return solveTab(nums);
    }
};