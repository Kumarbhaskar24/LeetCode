class Solution {
public:
    
    int digitSum(int n)
    {
        int sum=0;
        while(n)
        {
            sum+=n%10;
            n=n/10;
        }
        return sum;
    }
    
    int differenceOfSum(vector<int>& nums) {
        int sum1=0;
        int sum2=0;
        for(auto it:nums)
            sum1+=it;
        for(auto it:nums)
        {
            if(it>9)
                sum2+=digitSum(it);
            else
                sum2+=it;
        }
        return sum1-sum2;
    }
};