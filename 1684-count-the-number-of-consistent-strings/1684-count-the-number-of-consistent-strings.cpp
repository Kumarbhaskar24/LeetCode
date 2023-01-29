class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int ans=0;
        map<char,int> m;
        for(auto it:allowed)
            m[it]++;
        for(int i=0;i<words.size();i++)
        {
            int cnt=0;
            for(auto it:words[i])
                if(m[it]==0)
                    cnt++;
            if(cnt==0)
                ans++;
        }
        return ans;
    }
};