class Solution {
public:
    bool halvesAreAlike(string s) {
        int a=0;
        int b=0;
        int i=0;
        int j=s.size()-1;
        while(i<j)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            {
                a++;
            }
            if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u'||s[j]=='A'||s[j]=='E'||s[j]=='I'||s[j]=='O'||s[j]=='U')
            {
                b++;
            }
            i++;j--;
        }
        
        return a==b?true:false;
    }
};