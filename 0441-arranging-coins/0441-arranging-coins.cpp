class Solution {
public:
    int arrangeCoins(int n) {
        long long sum=0;
        long long i=1;
        while(sum<=n)
        {
            sum=sum+i;
            i++;
        }
        return i-2;
    }
};