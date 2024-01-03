class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        map<int,int> m;
        int ans=0;
        for(auto it:bank)
        {
            int cnt=0;
            for(auto it2:it)
            {
                if(it2=='1')
                {
                    cnt++;
                }
            }
            m[ans]=cnt;
            ans++;
        }
        int sol=0;
        int prev=0;
        for(auto it:m)
        {
            if(it.second!=0)
            {
                if(it.first==0)
                {
                    prev=it.second;
                }
                else
                {
                    sol+=it.second*prev;
                    prev=it.second;
                }
            }
        }
        return sol;
    }
};