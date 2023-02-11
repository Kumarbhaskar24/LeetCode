class Solution {
public:
    bool checkStr(string str1,int idx, string str2){
        int n1 = str1.size();
        int n2 = str2.size();

        if(n1-idx<n2){
            return false;
        }
        int j=0;
        for(int i=idx; i<idx+n2; i++){
            if(str1[i]!=str2[j]){
                return false;
            }
            j++;
        }

        return true;
    }

    int strStr(string haystack, string needle) {
        int hay_len = haystack.size();
        int nee_len = needle.size();
        int occur = -1;
        int i=0;
        while(i< hay_len){
            if(haystack[i]==needle[0]){
                if(checkStr(haystack, i, needle)){
                    return i;
                }
            }
            i++;
        }

        return -1;
    }
};