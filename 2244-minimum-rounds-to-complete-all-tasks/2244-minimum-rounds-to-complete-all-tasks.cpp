class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        map<int,int> m;
        for(auto it:tasks)
            m[it]++;
        int cnt=0;
        for(auto it:m)
        {
            if(it.second==1)
                return -1;
            cnt+=(it.second+2)/3;
        }
        return cnt;
    }
};