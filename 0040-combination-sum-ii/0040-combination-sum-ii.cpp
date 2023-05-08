class Solution {
public:
    
    
    void helper(int i,int target,int sum,vector<int> & nums,vector<vector<int>> &ans,vector<int> &temp)
    {
        if(sum>target)
            return ;
        if(sum==target)
        {
            // vector<vector<int>>:: iterator it;
            // it=find(ans.begin(),ans.end(),temp);
            // if(it==ans.end())
                ans.push_back(temp);
            return;
        }
        for(int j=i;j<nums.size();j++)
        {
            if(j>i&&nums[j]==nums[j-1])continue;
            if(nums[j]>target)
                break;
            temp.push_back(nums[j]);
            helper(j+1,target,sum+nums[j],nums,ans,temp);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        sort(candidates.begin(),candidates.end());
        helper(0,target,0,candidates,ans,temp);
        return ans;
    }
};