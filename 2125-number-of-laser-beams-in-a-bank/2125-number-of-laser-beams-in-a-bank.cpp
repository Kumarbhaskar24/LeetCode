class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int sol=0;
        int prev=0;
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
            if(ans==0)
            {
               prev=cnt;
            }
            else if(cnt!=0)
            {
               sol+=cnt*prev;
               prev=cnt;
            }
            ans++;
        }
        return sol;
    }
};