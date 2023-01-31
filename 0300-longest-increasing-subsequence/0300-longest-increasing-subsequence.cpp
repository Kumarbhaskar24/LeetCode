class Solution {
public:
    int ans=1;
//     int helper(vector<int> &nums,vector<vector<int>> &dp,int i,int j)
//     {
//         if(i==nums.size())
//             return 0;
       
//         if(dp[i][j+1]!=-1)
//             return dp[i][j+1];
        
//         int take=0;
//         //include the particular number
//         if(j==-1||nums[i]>nums[j])
//             take=1+helper(nums,dp,i+1,i);
        
//         //exclude the current value 
//         int nottake=0;
//             nottake=0+helper(nums,dp,i+1,j);
//         return dp[i][j+1]=max(take,nottake);
//     }
    
    int helper_binary_search(vector<int> &nums)
    {
        if(nums.size()==0)
            return 0;
        vector<int> ans;
        ans.push_back(nums[0]);
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]>ans.back())
                ans.push_back(nums[i]);
            else
            {
                int index=lower_bound(ans.begin(),ans.end(),nums[i])-ans.begin();
                ans[index]=nums[i];
            }
        }
        return ans.size();
    }
    int lengthOfLIS(vector<int>& nums) {
        // vector<vector<int>> dp(nums.size(),vector<int> (nums.size()+1,-1));
        // return helper(nums,dp,0,-1);
        return helper_binary_search(nums);
    }
};