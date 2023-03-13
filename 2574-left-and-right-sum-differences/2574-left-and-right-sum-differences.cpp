class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
        vector<int> ls;
        vector<int> rs;
        int sum=0;
        for(auto it:nums)
        {
            ls.push_back(sum);
            sum+=it;
        }
        sum=0;
        for(int i=nums.size()-1;i>=0;i--)
        {
            rs.push_back(sum);
            sum+=nums[i];
        }
        
        reverse(rs.begin(),rs.end());        
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            ans.push_back(abs(ls[i]-rs[i]));
        }
        return ans;
    }
};