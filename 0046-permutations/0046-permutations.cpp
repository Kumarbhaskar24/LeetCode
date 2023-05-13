class Solution {
public:
    
    void helper(vector<vector<int>> &ans,int i,vector<int> &nums)
    {
        if(i==nums.size())
        {
            ans.push_back(nums);
            return;
        }
        for(int j=i;j<nums.size();j++)
        {
            swap(nums[i],nums[j]);
            helper(ans,i+1,nums);
            swap(nums[i],nums[j]);
        }
        
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        helper(ans,0,nums);
        return ans;
    }
};