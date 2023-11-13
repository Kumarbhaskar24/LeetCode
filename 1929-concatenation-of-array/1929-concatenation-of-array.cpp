class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;
        int cnt=1;
        for(int i=0;i<nums.size();i++)
        {
            ans.push_back(nums[i]);
            if(i==nums.size()-1&&cnt)
            {
                i=-1;
                cnt=0;
            }
        }
        return ans;
    }
};