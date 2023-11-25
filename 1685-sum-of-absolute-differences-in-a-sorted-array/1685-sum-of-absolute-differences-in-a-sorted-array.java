class Solution {
    public int[] getSumAbsoluteDifferences(int[] nums) {
        int leftSum =0,rightSum=0,totalSum=0,n=nums.length;
        int ans[]= new int[n];
        for(int it:nums)
            totalSum+=it;
        for(int i=0;i<n;i++)
        {
            int leftValue=nums[i]*i-leftSum;
            int rightValue=totalSum-leftSum-nums[i]*(n-i);
            leftSum+=nums[i];
            ans[i]=leftValue+rightValue;
        }
        return ans;
    }
}