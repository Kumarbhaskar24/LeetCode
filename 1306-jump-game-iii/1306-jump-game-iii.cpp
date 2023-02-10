class Solution {
public:
    
    bool solve(vector<int> &nums,int start,vector<int> &dp)
    {
        if(start<0||start>=nums.size())
            return false;
        if(nums[start]==0)
            return true;
        if(dp[start]==-1)
            return false;
        dp[start]=-1;
        bool a=solve(nums,start-nums[start],dp);
        bool b=solve(nums,start+nums[start],dp);
        return a||b;
    }
    
    bool canReach(vector<int>& arr, int start) {
        vector<int> dp(arr.size()+1,0);
        return solve(arr,start,dp);
    }
};