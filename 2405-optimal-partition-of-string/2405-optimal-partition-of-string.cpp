class Solution {
public:
    int partitionString(string s) {
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            bool a=true;
            unordered_map<char,int> m;
            while(a&&i<s.size())
            {
                if(m[s[i]]==1)
                    a= false;
                else{
                    m[s[i]]++;
                    i++;
            }
            }
            i--;
            ans++;
        }
        return ans;
    }
};