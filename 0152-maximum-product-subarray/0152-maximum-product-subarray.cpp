class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int currprod=1;
        int maxprod=INT_MIN;
        for(auto it:nums)
        {
            currprod=currprod*it;
            maxprod= max(currprod, maxprod);
            if(currprod==0)
                currprod=1;
        }
        currprod=1;
        for (int i = nums.size()- 1; i >= 0; i--) 
        {
            currprod = currprod * nums[i];
            maxprod= max(currprod, maxprod);
            if(currprod == 0) {
                currprod = 1;
            }      
        }
        return maxprod;
    }
};