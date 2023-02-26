class Solution {
public:
    //string replaceDigits(string s) {
    //     string ans;
    //     for(int i=0;i<s.size()-1;i+=2)
    //     {
    //         ans.push_back(s[i]);
    //         ans.push_back(s[i]+(s[i+1]-'0'));
    //     }
    //     return ans;
    // }
         string replaceDigits(string s) {
        for (int i = 1; i < s.size(); i += 2)
            s[i] += s[i-1] - '0';
        return s;
    }
};