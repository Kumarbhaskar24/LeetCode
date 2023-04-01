class Solution {
public:
    
    
    int solve(vector<int> &nums,int target,int start,int end)
    {
        if(start>end)
            return -1;
        int mid=(start+end)/2;
        if(target==nums[mid])
            return mid;
        if(target>nums[mid])
            return solve(nums,target,mid+1,end);
        else
            return solve(nums,target,start,mid-1);   

    }
    
    int search(vector<int>& nums, int target) {
       // return solve(nums,target,0,nums.size()-1);
        
        int start=0;
        int end=nums.size()-1;
        while(start<=end)
        {
            int mid=(start+end)/2;
            if(nums[mid]==target)
                return mid;
            if(target>nums[mid])
            {
                start=mid+1;
            }
            else if(target<nums[mid])
                end=mid-1;
        }
        return -1;
    }
};