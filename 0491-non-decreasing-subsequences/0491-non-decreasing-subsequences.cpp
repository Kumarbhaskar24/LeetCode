class Solution {
public:
    set<vector<int>> ans;
    int solve(vector<int> &nums,int i,int prev,vector<int> temp,vector<vector<int>> dp)
    {
        if(i==nums.size())
            return 0;
        if(dp[i][prev+1]!=-1)
            return dp[i][prev+1];
        if(prev==-1||nums[i]>=nums[prev])
        {
            temp.push_back(nums[i]);
            if(temp.size()>1)
                ans.insert(temp);
            dp[i][prev+1]=solve(nums,i+1,i,temp,dp);
            temp.pop_back();
        }
        return dp[i][prev+1]=solve(nums,i+1,prev,temp,dp);
       
    }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<int> temp;
        vector<vector<int>> dp(nums.size(),vector<int>(nums.size()+1,-1));
        solve(nums,0,-1,temp,dp);
        return vector(ans.begin(),ans.end());
    }
};