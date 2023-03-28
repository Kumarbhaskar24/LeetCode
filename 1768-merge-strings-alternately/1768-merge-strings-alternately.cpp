class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;
        int j=0;
        int k=0;
        for(int i=0;i<word1.size()+word2.size();i++)
        {
            if(i%2==0&&j<word1.size())
            {
                ans+=word1[j];
                j++;
            }
            else if(i%2!=0&&k<word2.size())
            {
                ans+=word2[k];
                k++;
            }
        }
        if(j<word1.size())
        {
            while(j<word1.size())
            {
                ans+=word1[j];
                j++;
            }
        }
        if(k<word2.size())
        {
            while(k<word2.size())
            {
                ans+=word2[k];
                k++;
            }
        }
        return ans;
    }
    
};