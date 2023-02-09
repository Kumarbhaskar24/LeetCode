class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        if(nums.size()<2)
            return nums[0];
        int sum=INT_MIN;
        int currsum=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]<=nums[i-1])
            {
                sum=max(sum,currsum);
                currsum=0;
                
            }
            currsum+=nums[i];
        }
        return sum=max(sum,currsum);
    }
};