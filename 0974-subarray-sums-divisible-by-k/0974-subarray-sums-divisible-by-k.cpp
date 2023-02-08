class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        map<int,int> m;
        m[0]++;
        int sum=0;
        int ans=0;
        for(auto it:nums)
        {
            sum+=it;
            int rem=sum%k;
            if(rem<0)
                rem+=k;
            if(m.find(rem)!=m.end())
            {
                ans+=m[rem];
            }
            m[rem]++;
        }
        return ans;
    }
};