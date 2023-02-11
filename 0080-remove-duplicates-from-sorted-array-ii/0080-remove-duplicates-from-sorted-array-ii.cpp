class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int> m;
        for(auto it:nums)
            m[it]++;
        vector<int> temp;
        for(auto it:m)
        {
            if(it.second>=2)
            {
                temp.push_back(it.first);
                temp.push_back(it.first);
            }
            else
                temp.push_back(it.first);   
        }
        for(int i=0;i<temp.size();i++)
        {
            nums[i]=temp[i];
        }
        return temp.size();
    }
};