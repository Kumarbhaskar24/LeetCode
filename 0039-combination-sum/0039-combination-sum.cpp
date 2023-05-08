class Solution {
public:
    
    void helper(int i,vector<int>& nums, vector<vector<int>> &ans,vector<int> &temp,int sum,int target)
    {
        if(sum>target)
            return ;
        if(sum==target)
        {
            ans.push_back(temp);
            return;
        }
        for(int j=i;j<nums.size();j++)
        {
            temp.push_back(nums[j]);
            helper(j,nums,ans,temp,sum+nums[j],target);
            temp.pop_back();   
        }
    }
    
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        helper(0,candidates,ans,temp,0,target);
        return ans;
    }
};