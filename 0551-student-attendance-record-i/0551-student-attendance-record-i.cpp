class Solution {
public:
    bool checkRecord(string s) {
        unordered_map<char,int> m;
        int cnt=1;
        if(s.size()==1)
            return true;
        for(int i=1;i<s.size();i++)
        {
            if(s[i-1]==s[i])
                cnt++;
            else
            {
                if(cnt>=3&&s[i-1]=='L')
                    return false;
                m[s[i-1]]+=cnt;
                cnt=1;
            }
        }
        if(cnt>=3&&s[s.size()-1]=='L')
        {
            return false;
        }
        if(cnt!=1)
            m[s[s.size()-1]]+=cnt;
        for(auto it:m)
        {
            if(it.first=='A'&&it.second>=2)
                return false;
        }
        return true;
    }
};