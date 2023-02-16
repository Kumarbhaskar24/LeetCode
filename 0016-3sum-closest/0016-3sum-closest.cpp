class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int closest = nums[0] + nums[1] + nums[2];
        if(nums.size()==0){
            return 0;
        }
       for(int i =0; i< nums.size()-2; i++){
           if(i > 0 && nums[i] == nums[i-1]) continue;
           int j = i+1;
           int k = nums.size()-1;
           while(j<k){
               if(abs(target - closest)> abs(target-(nums[i]+nums[j]+nums[k])))
                   closest = nums[i]+nums[j]+nums[k];
               if(nums[i]+nums[j]+nums[k] > target)
                   k--;
               else
                   j++;                    
           }
       }
        
        return closest;
    }
};