class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int i=0,j=nums.size()-1;
        while(i<j)
        {
            if(nums[i]!=nums[i+1])
                return nums[i];
            if(nums[j]!=nums[j-1])
                return nums[j];
            else
            {
                i+=2;
                j-=2;
            }
        }
        return nums[i];
    }
};