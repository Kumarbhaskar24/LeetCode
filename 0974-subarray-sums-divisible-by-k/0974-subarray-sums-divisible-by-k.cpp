class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        vector<int> v(k,0);
        int sum=0;
        for(int it:nums)
        {
            sum+=(it%k+k)%k;
            v[sum%k]++;
        }
        int res=v[0];
        for(auto it:v)
        {
            res+=(it*(it-1))/2;
        }
        return res;
    }
};