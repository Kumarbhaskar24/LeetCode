class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans=0;
        
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                int temp=(nums[i]-1)*(nums[j]-1);
                ans=max(ans,temp);
            }
        }
        return ans;
    }
};