class Solution {
public:
    string sortSentence(string s) {
        int i=0;
        map<int,string> m;
        string temp;
        while(i<s.size())
        {
            int cnt=0;
            int j=i;           
            while(i<s.size()&&s[i]!=' ')
            {
                temp+=s[i];
                i++;
                cnt++;
            }
            int t=s[i-1]-'0';
            string tp;
            tp=temp.substr(j,cnt-1);
            m[t]=tp;
            i++;
            temp+=' ';
        }
        string ans;
        for(auto it:m)
        {
            ans+=it.second;
            if(it.first!=m.size())
                ans+=" ";
        }
        return ans;
    }
};