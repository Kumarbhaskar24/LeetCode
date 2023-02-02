class Solution {
public:
    int countPoints(string rings) {
        map<int,set<char>> m;
        for(int i=0;i<rings.size();i++)
        {
            m[rings[i+1]].insert(rings[i]);
            i++;
        }
        int cnt=0;
        for(auto it:m)
        {
            if(it.second.size()==3)
                cnt++;
        }
        return cnt;
    }
};