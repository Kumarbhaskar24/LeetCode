class Solution {
public:
    bool detectCapitalUse(string word) {
        int cnt=0;
        int cntl=0;
        for(int i=0;i<word.size();i++)
        {
            if(isupper(word[i]))
            {
                cnt++;
            }
           if(islower(word[i]))
            {
                cntl++;
               
            }
            if(i==0&&isupper(word[i]))
               {
                   cntl++;
               }
            
        }
        cout<<cntl;
        if(cnt==word.size()||cntl==word.size())
            return true;
        else
            return false;
    }
};