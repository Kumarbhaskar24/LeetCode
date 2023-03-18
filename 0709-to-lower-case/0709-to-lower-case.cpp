class Solution {
public:
    string toLowerCase(string s) {
        string s1;
        for(auto it:s)
        {
            if(int(it)>=65&&int(it)<=90)
                it=int(it)+32;
            s1.push_back(it);
        }
        return s1;
    }
};