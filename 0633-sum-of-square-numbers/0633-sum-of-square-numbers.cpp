class Solution {
public:
    bool judgeSquareSum(int c) {
        int t=sqrt(c);
        long long s=0;
        long long e=t;
        while(s<=e)
        {
            long long res=(s*s+e*e);
            if(res>c)
                e--;
            else if(res<c)
                s++;
            else return true;
        }
        return false;
    }
};