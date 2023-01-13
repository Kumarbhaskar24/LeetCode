class Solution {
public:
    bool isPalindrome(int x) 
    {
    long long num=x;
    long long rev_num = 0;
    while (num > 0) {
        rev_num = rev_num * 10 + num % 10;
        num = num / 10;
    }
    if(rev_num==x)
        return true;
    return false;
    }
};