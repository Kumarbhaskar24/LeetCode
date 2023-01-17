class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int> m;
        int cnt=0;
        for(auto it:s)
            m[it]++;
        for(auto it:m)
        {
            if(cnt==0)
                cnt=it.second;
            else if(it.second!=cnt)
                return false;
        }
        return true;
    }
};