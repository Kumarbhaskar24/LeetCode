class Solution {
public:
    string reverseVowels(string s) {
        int st=0;
        int e=s.size()-1;
        while(st<e)
        {
            if(s[st]=='a'||s[st]=='e'||s[st]=='i'||s[st]=='o'||s[st]=='u'||s[st]=='A'||s[st]=='E'||s[st]=='I'||s[st]=='O'||s[st]=='U')
            {
                while((s[e]!='a'&&s[e]!='e'&&s[e]!='i'&&s[e]!='o'&&s[e]!='u'&&s[e]!='A'&&s[e]!='E'&&s[e]!='I'&&s[e]!='O'&&s[e]!='U')&&st<e)
                {
                    e--;
                }
                //cout<<st<<" "<<e<<endl;
                if(st<e)
                {
                    swap(s[st],s[e]);
                    e--;
                }
                else return s;
            }
            st++;
        }
        return s;
    }
};