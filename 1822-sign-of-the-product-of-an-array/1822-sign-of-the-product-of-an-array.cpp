class Solution {
public:
    int arraySign(vector<int>& nums) {
        int neg=0;
        int cnt=0;
        for(auto it:nums)
        {
            if(it<0)
                neg++;
            if(it==0)
                cnt++;
        }
        if(cnt>0)
            return 0;
        else if(neg%2==0)
            return 1;        
        return -1;
    }
};