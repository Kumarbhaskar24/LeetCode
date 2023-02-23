class Solution {
public:
    vector<vector<int>> ans;
    vector<vector<int>> solve(vector<int>& nums,int target,int i,vector<int> &temp)
    {
        if(target==0)
        {
            ans.push_back(temp);
            return ans;
        }
        for(int j=i;j<nums.size();j++)
        {
            if(j>i&&nums[j]==nums[j-1])continue;
            if(nums[j]>target)
                break;
            temp.push_back(nums[j]);
            solve(nums,target-nums[j],j+1,temp);
            temp.pop_back();
        }
        return ans;
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> temp;
        sort(candidates.begin(),candidates.end());
        return solve(candidates,target,0,temp);
    }
};