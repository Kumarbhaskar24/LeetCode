class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        string s=a;
        int ans=1;
        while(a.size()<=b.size())
        {
            if(a.find(b)!=string::npos)
                return ans;
            a=a+s;
            ans++;
        }
        if(a.find(b)!=string::npos)
            return ans;
        a=a+s;
        if(a.find(b)!=string::npos)
            return ans+1;
        return -1;
    }
};