class Solution {
public:
    int maxVowels(string s, int k) {
        int ans=0;
        int cnt=0;
        for(int i=0;i<s.size();i++)
        {
            if(i>=k&&(s[i-k]=='a'||s[i-k]=='e'||s[i-k]=='i'||s[i-k]=='o'||s[i-k]=='u'))
                cnt--;
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
                cnt++;
            ans=max(ans,cnt);
        }
        return ans;
    }
};