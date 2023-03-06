class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string> m;
        unordered_map<string,int> m2;
        int j=0;
        int cnt=0;
        for(int i=0;i<pattern.size();i++)
        {
            string str;
            while(j<s.size()&&s[j]!=' ')
            {
                str+=s[j];
                j++;
            }
            if(j<=s.size())
                cnt++;
            if(m.find(pattern[i])!=m.end())
            {
                if(m[pattern[i]]!=str)
                    return false;
            }
            else
                m[pattern[i]]=str;
            j++;
        }
        //cout<<cnt;
        if(pattern.size()!=cnt||j<s.size())
            return false;
        for(auto it:m)
        {
            m2[it.second]++;
        }
        for(auto it:m2)
        {
            if(it.second>1)
                return false;
        }
        return true;
    }
};