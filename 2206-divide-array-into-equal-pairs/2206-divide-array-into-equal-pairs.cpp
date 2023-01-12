class Solution {
public:
    bool divideArray(vector<int>& nums) {
        map<int,int> m;
        for(auto it:nums)
            m[it]++;
        for(auto it:m)
            if(it.second%2)
                return false;

        return true;
    }
};