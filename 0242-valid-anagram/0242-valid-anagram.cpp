class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size())
          return false;
    
        unordered_map<char,int> m;
        for(auto it:s)
            m[it]++;
        for(auto it:t)
            m[it]--;
        for(auto it:m)
        {
            if(it.second!=0)
                return false;
        }
        return true;
    }
    
};