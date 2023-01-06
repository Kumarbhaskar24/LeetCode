class Solution {
public:
    bool isPowerOfTwo(long long n) {
        if((n&(n-1))!=0)
            return false;
        if(n==0)
            return false;
        return true;
    }
};