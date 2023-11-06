class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int,int> m;
        for(auto it:nums)
            m[it]++;
        vector<pair<int,int>> a;
        for(auto it:m)
        {
            a.push_back(make_pair(it.second,it.first));
        }
        sort(a.begin(),a.end(),greater<pair<int,int>>());
        for(auto it:a)
        {
            if(k)
            {
                ans.push_back(it.second);
                k--;
            }
        }
        return ans;
    }
};