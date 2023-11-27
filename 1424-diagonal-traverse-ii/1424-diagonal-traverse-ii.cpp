class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        vector<int> ans;
        map<int,vector<int>> mp;
        int n=nums.size()-1;
        for(int i=n;i>=0;i--)
        {
            int col = nums[i].size()-1; 
            for(int j=col;j>=0;j--)
            {
                mp[i+j].push_back(nums[i][j]);
            }
        }
        for(auto it:mp)
        {
            for(auto it1:it.second)
            {
                ans.push_back(it1);
            }
        }
        return ans;
    }
};