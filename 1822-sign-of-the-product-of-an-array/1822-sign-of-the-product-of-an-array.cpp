class Solution {
public:
    int arraySign(vector<int>& nums) {
        int temp=1;
        for(auto it:nums)
        {
            if(it<0)
                temp^=1;
            if(it==0)
                return 0;
        }
        return temp==0?-1:1;
    }
};