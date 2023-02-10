class Solution {
public:
    int jump(vector<int>& nums) {
        int maxjump=0;
        int curr=0;
        int jump=0;
        for(int i=0;i<nums.size();i++)
        {
            maxjump=max(maxjump,nums[i]+i);
            if(curr==i&&curr!=nums.size()-1)
            {
                curr=maxjump;
                jump++;
            }
        }
        return jump;
    }
};