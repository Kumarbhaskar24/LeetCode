class Solution {
public:
    void reverseString(vector<char>& s) {
        int si=s.size();
        if(si%2==0)
        {
            int i=si/2;
            int j=i-1;
            while(i<si&&j>=0)
            {
                swap(s[i],s[j]);
                i++;
                j--;
            }
        }
        else{
            int i=(si/2)+1;
            int j=(si/2)-1;
            while(i<si&&j>=0)
            {
                swap(s[i],s[j]);
                 i++;
                 j--;
            }
        }
    }
};