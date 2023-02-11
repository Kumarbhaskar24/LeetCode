class Solution {
public:
    int countAsterisks(string s) {
        int cnt=0;
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='*'&&cnt%2==0)
                ans++;
            else if(s[i]=='|')
                    cnt++;
        }
        return ans;
    }
};