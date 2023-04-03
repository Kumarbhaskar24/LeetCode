class Solution {
public:
    int numRescueBoats(vector<int>& p, int lim) {
        sort(p.begin(),p.end());
        int s=0;
        int e=p.size()-1;
        int ans=0;
        int sum=0;
        while(s<=e)
        {
            if(s==e)
            {
                if(p[s]<=lim)
                    ans++;
                s++;
                e--;
            }
            else
            {
                sum+=p[s]+p[e];
               if(sum>lim)
                {
                    sum-=p[s];
                    if(sum<=lim)
                    {
                        ans++;
                    }
                    sum=0;
                    e--;
                }
                else{
                    ans++;
                    s++;
                    e--;
                    sum=0;
                    }    
            }
            
        }
        return ans;
    }
};