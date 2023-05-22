class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map <int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
       
        for(int j=0;j<k;j++)
        {
        int maxi=0;
        int val=0;
        for(auto i:m)
        {
         if(i.second>maxi)
         {
             maxi=i.second;
             val=i.first;
         }
        }
            ans.push_back(val);
            m.erase(val);
            
        }
        return ans;
    }
};