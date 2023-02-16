class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;  
        for(int i=0;i<nums.size()-1;i++)
        {
            if(i>0&&nums[i-1]==nums[i])
                continue;
            int a=-nums[i];
            int j=i+1;
            int k=nums.size()-1;
            while(j<k)
            {
                vector<int> temp;
                if(nums[j]+nums[k]<a)
                    j++;
                else if(nums[j]+nums[k]>a)
                    k--;
                else if(nums[j]+nums[k]==a)
                {
                    temp.push_back(nums[i]);
                    temp.push_back(nums[j]);
                    temp.push_back(nums[k]);
                    ans.push_back(temp);
                    while(j<k && nums[k]==nums[k-1]) k--;
                    while(j<k && nums[j]==nums[j+1]) j++;   
                    j++;
                    k--;
                }
            }
        }
        return ans;
    }
};