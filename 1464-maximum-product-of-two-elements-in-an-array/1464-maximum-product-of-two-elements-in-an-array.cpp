class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            nums[i]=nums[i]-1;
        }
        ans=nums[nums.size()-1]*nums[nums.size()-2];
        return ans;
    }
};