class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        vector<int> ans;
        int tofind=0;
        for(int i=0;i<nums.size();i++)
        {
            tofind=target-nums[i];
            if(m.find(tofind)!=m.end())
            {
                ans.push_back(m[tofind]);
                ans.push_back(i);
                return ans;
            }
            m[nums[i]]=i;
        }
        return ans;
    }
};