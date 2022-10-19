class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        int p=0;
        int cnt=0;
        int cnt2=0;
        int l=0;
        for(auto it:m)
        {
            if(it.second>=2)
            {
             p=it.second/2;      
            cnt=cnt+p;
            }
            l=it.second%2;
            cnt2=cnt2+l;
        }
        //
        ans.push_back(cnt);
       // int l=nums.size()%2;
        ans.push_back(cnt2);
        return ans;
    }
};