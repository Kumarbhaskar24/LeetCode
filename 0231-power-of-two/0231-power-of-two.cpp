class Solution {
public:
    bool isPowerOfTwo(long long n) {
        // if(n==1)
        //     return true;
        // else if(n<1)
        //     return false;
        // else if(n&1)
        //     return false;
        // return true;
        if(n&&(n&n-1))
            return false;
        if(n==0)
            return false;
        return true;
    }
};