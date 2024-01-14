class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size()!=word2.size())
            return false;
        unordered_map<char,int> m1;
        unordered_map<char,int> m2;
        for(auto it:word1)
            m1[it]++;
        for(auto it:word2)
            m2[it]++;
        vector<int> v1;
        vector<int> v2;
        for(auto it:m1)
        {
            if(m2.find(it.first)!=m2.end())
                v1.push_back(it.second);
            else
                return false;
        }
        for(auto it:m2)
             if(m1.find(it.first)!=m1.end())
                v2.push_back(it.second);
             else
                return false;
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        if(v1.size()!=v2.size())
            return false;
        for(int i=0;i<v1.size();i++)
        {
            if(v1[i]!=v2[i])
                return false;
        }
        return true;
    }
};