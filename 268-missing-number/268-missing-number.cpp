class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int cnt=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=cnt)
            {
                return cnt;
            }
            cnt++;
        }
        return cnt;
    }
};