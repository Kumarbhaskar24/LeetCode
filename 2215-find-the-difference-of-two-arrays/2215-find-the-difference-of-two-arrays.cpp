class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> ans(2); 
        set<int> s1;
        set<int> s2;
        vector<int>:: iterator it;
        for(auto it1:nums1)
        {
            it=find(nums2.begin(),nums2.end(),it1);
            if(it==nums2.end())
            {
                s1.insert(it1);
            }
                
        }
        for(auto its:s1)
        {
            ans[0].push_back(its);
        }
        for(auto it2:nums2)
        {
            it=find(nums1.begin(),nums1.end(),it2);
            if(it==nums1.end())
            {
                s2.insert(it2);
            }
                
        }
        for(auto its:s2)
        {
            ans[1].push_back(its);
        }
        return ans;
    }
};