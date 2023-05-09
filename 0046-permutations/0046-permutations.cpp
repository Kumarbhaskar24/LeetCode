class Solution {
public:
    
    void helper(vector<vector<int>> &ans,vector<int> &temp,vector<int> &perm,vector<int> &nums)
    {
        if(perm.size()==nums.size())
        {
            ans.push_back(perm);
            return;
        }
        for(int j=0;j<nums.size();j++)
        {
            if(!temp[j])
            {
                temp[j]=1;
                perm.push_back(nums[j]);
                helper(ans,temp,perm,nums);
                temp[j]=0;
                perm.pop_back();
            }
        }
        
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> perm;
        vector<int> temp(nums.size(),0);
        helper(ans,temp,perm,nums);
        return ans;
    }
};