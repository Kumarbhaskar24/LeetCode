class Solution {
public:

    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> myvec;
        sort(nums.begin(),nums.end());
        if(nums.size()<=2)
            return myvec;
        for(int s=0;s<nums.size()-2;s++)
        {
            if(s==0||(s>0 && nums[s]!=nums[s-1]))
            {
                int i=s+1;
                int j=nums.size()-1;
                int target=-nums[s];
               while(i<j)
               {
                     if(nums[i]+nums[j]>target)
                        j--;
                    else if(nums[i]+nums[j]==target)
                    {
                        myvec.push_back({nums[s],nums[i],nums[j]});
                        while(i<j && nums[j]==nums[j-1]) j--;
                        while(i<j && nums[i]==nums[i+1]) i++;                        
                        i++;
                        j--;
                    }
                   else
                       i++;
                }
            }
        }
        
        return myvec;
    }
};