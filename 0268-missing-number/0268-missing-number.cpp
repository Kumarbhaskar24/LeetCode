class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            if(i+1<nums.size())
                if(nums[i+1]-nums[i]!=1)
                    return i+1;
        }
        if(nums.size()==1)
            return nums[0]==0?1:0;
        return nums[0]!=0?0:nums.size();
    }
};