class Solution {
public:
    int divisors(int n)
    {
        int sum=0;
        int cnt=0;
        int i=1;
        while(n>i*i)
        {
            if(n%i==0)
            {
                cnt+=2;
                sum+=i+n/i;
            }
            i++;
        }
        if(i*i==n)
            cnt++;
        if(cnt==4)
            return sum;
        return 0;
    }
    int sumFourDivisors(vector<int>& nums) {
        int ans=0;
        for(auto it:nums)
        {
            ans+=divisors(it);
        }
        return ans;
    }
};