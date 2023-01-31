class Solution {
public:
    static bool comp(vector<int> &a, vector<int> &b)
    {
    if(a[0] == b[0]){
        return a[1] > b[1];
    }
    return a[0] < b[0];
    }
    
    int solve(vector<vector<int>> &e)
    {
        if(e.size()==0)
            return 0;
        vector<int> ans;
        int prev=0;
        ans.push_back(e[0][1]);
        for(int i=1;i<e.size();i++)
            if(e[i][1]>ans.back())
                ans.push_back(e[i][1]);
            else
            {
                int index = lower_bound(ans.begin(), ans.end(), e[i][1]) - ans.begin();
                ans[index] = e[i][1];
            }
        return ans.size();
    }
    
    int maxEnvelopes(vector<vector<int>>& envelopes) {
        sort(envelopes.begin(),envelopes.end(),comp);
        return solve(envelopes);
    }
};