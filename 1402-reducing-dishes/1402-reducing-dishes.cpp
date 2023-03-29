class Solution {
public:
    
    
    int solve(vector<int>& nums)
    {
        int maxi=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            int cnt=1;
            int sum=0;
            for(int j=i;j<nums.size();j++)
            {
                sum+=(nums[j]*cnt);
                cnt++;
            }
            maxi=max(maxi,sum);
        }
        return maxi;
    }
    
    int maxSatisfaction(vector<int>& satisfaction) {
        return solve(satisfaction);
    }
};