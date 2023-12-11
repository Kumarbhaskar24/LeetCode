class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        unordered_map<int,int> m;
        for(auto it:arr)
        {
            m[it]++;
        }
        int n=arr.size()/4;
        for(auto it:m)
        {
         if(it.second>n)
             return it.first;
        }
        return 0;
    }
};