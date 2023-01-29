class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int ans=0;
        for(int i=0;i<words.size();i++)
        {
            map<char,int> m;
            int cnt=0;
            for(auto it:words[i])
                m[it];
            for(auto it:allowed)
                m[it]++;
            for(auto it:m)
                if(it.second==0)
                    cnt++;
            if(cnt==0)
                ans++;
        }
        return ans;
    }
};