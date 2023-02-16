class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int closest = nums[0] + nums[1] + nums[2];
        for(int i =0; i< nums.size()-2; i++){
           if(i > 0 && nums[i] == nums[i-1]) continue;
           int j = i+1;
           int k = nums.size()-1;
           while(j<k){
               int currsum=nums[i]+nums[j]+nums[k];
               if(target==currsum)
                   return currsum;
               if(abs(target - closest)> abs(target-currsum))
                   closest = currsum;
               if(currsum > target)
                   k--;
               else
                   j++;                    
                }
            }
        return closest;
    }
};