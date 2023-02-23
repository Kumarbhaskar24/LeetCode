class Solution {
public:
    vector<vector<int>> ans;
    vector<vector<int>> solve(vector<int>& candidates, int target,int i,vector<int> &temp)
    {
        if(target<0||i>=candidates.size())
            return ans;
        if(target==0)
        {
            ans.push_back(temp);
            return ans;
        }
        temp.push_back(candidates[i]);
        solve(candidates,target-candidates[i],i,temp);
        temp.pop_back();
        solve(candidates,target,i+1,temp);
        return ans;
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> temp;
        return solve(candidates,target,0,temp);
    }
};