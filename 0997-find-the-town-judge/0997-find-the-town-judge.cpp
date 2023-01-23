class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
       unordered_map<int,int> m;
        set<int> s;
        if(trust.size()==0&&n==1)
            return n;
        for(auto it:trust)
            s.insert(it[0]);
        if(s.size()==n)
            return -1;
        for(auto it:trust)
            m[it[1]]++;
        for(auto it:m)
            if(it.second==n-1)
                return it.first;
        return -1;
    }
};