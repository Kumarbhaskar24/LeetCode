class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string,int> m;
        vector<string> v;
        for(int i=0;i<words.size();i++)
        {
            m[words[i]]++;
        }
    
        for(int i=0;i<k;i++)
        {
                int maxi=0;
                string s;
            for(auto it:m)
            {
                if(it.second>maxi)
                {
                    maxi=it.second;
                    s=it.first;
                }
                
            }
            v.push_back(s);
            m.erase(s);
        }
        return v;
    }
};