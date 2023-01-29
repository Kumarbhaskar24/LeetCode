class Solution {
public:
    int check(string s,int i,int j)
    {

        while(i<j)
        {
            if(s[i]==s[j])
            {
                i++;j--;
            }
            else 
                break;
        }
        if(i>=j)
            return 1;
        return 0; 
    }
    
    int countSubstrings(string s) {
        int res=0;
        for(int i=0;i<s.size();i++)
            for(int j=i+1;j<s.size();j++)
                res+=check(s,i,j);
        return res+s.size();
    }
};