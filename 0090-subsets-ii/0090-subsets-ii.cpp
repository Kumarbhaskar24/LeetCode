class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n=nums.size();
        map<vector<int>,int> m;
        vector<vector<int>> ans;
        for(int i=0;i<(1<<n);i++)
        {
            vector<int> temp;
            for(int j=0;j<n;j++)
            {
                if(i&(1<<j))
                    temp.push_back(nums[j]);
            }   
            sort(temp.begin(),temp.end());
            m[temp]++;
            if(m[temp]==1)
            ans.push_back(temp);
        }
        return ans;
    }
};