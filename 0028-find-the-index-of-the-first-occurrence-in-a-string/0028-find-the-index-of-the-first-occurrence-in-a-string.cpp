class Solution {
public:
    int strStr(string haystack, string needle) {
        int j=0,i=0;
        int k=0;
        while(i<haystack.size())
        {
            k=i;
            while(k<haystack.size()&&j<needle.size()&&haystack[k]==needle[j])
            {
                k++;
                j++;
            }
            if(j==needle.size())
                return k-j;
            else
            {
                i++;
                j=0;
            }
        }
        return -1;
    }
};