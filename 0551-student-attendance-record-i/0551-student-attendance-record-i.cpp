class Solution {
public:
    bool checkRecord(string s) {
        int L=0;
        int A=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='A')
            {
                L=0;
                A++;
                if(A==2)
                    return false;
            }
            else if(s[i]=='L')
            {
                L++;
                if(L==3)
                    return false;
            }
            else L=0;
        }
        return true;
    }
};