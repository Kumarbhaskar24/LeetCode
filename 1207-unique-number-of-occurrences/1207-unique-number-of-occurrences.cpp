class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> m;
        map<int,int> m2;
        for(auto it:arr)
        {
            m[it]++;
        }
        
        for(auto it:m)
        {
            m2[it.second]++;
        }
        for(auto it:m2)
            if(it.second!=1)
                return false;
        return true;
    }
};