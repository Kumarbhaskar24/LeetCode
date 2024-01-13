class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int> m1;
        int ans=0;
        for(auto it:s)
            m1[it]++;
        for(auto it:t)
        {
            if(m1.find(it)!=m1.end())
            {
                m1[it]--;
                if(m1[it]==0)
                {
                    m1.erase(it);
                }
            }
            else{
                ans++;
            }
        }
        return ans;
    }
};