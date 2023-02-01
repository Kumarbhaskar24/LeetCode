class Solution {
public:
    set<vector<int>> ans;
    void solve(vector<int> &nums,int i,int prev,vector<int> temp)
    {
        if(i==nums.size())
            return ;
        if(prev==-1||nums[i]>=nums[prev])
        {
            temp.push_back(nums[i]);
            if(temp.size()>1)
                ans.insert(temp);
            solve(nums,i+1,i,temp);
            temp.pop_back();
        }
        solve(nums,i+1,prev,temp);
        return ;
    }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<int> temp;
        solve(nums,0,-1,temp);
        return vector(ans.begin(),ans.end());
    }
};