class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int> m;
        int cnt=0;
        for(int i=0;i<jewels.size();i++)
        {
            m[jewels[i]]++;
        }
        for(int i=0;i<stones.size();i++)
        {
            if(m.find(stones[i])!=m.end())
                cnt++;
        }
        return cnt;
    }
};