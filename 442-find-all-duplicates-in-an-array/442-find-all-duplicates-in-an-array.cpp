class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        vector<int> ans;
        for(auto it:m)
        {
            if(it.second>1)
                ans.push_back(it.first);
        }
        return ans;
    }
};