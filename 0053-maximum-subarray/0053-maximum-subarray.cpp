class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum=INT_MIN;
        int currsum=0;
        for(auto it:nums)
        {
            currsum=currsum+it;
            if(currsum>maxsum)
                maxsum=currsum;
            if(currsum<0)
                currsum=0;
        }
        return maxsum;
    }
};