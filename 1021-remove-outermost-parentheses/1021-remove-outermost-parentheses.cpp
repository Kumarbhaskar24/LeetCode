class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;
        int st=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                if(st>0)
                    ans.push_back('(');
                st++ ;              
            }
            else
            {
                if(st>1)
                    ans.push_back(')');
                st--;
            }
        }
        return ans;
    }
};