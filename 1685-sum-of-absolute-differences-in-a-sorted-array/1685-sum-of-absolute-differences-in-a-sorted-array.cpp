class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int leftSum=0,rightSum=0,totalSum=0,n=nums.size();
        vector<int> ans;
        for(auto it:nums)
            totalSum+=it;
        for(int i=0;i<n;i++)
        {
            int leftValue=nums[i]*i-leftSum;
            int rightValue=totalSum-leftSum-nums[i]*(n-i);
            leftSum+=nums[i];
            ans.push_back(leftValue+rightValue);
        }
        return ans;
    }
};