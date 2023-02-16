class Solution {
public:
    string addStrings(string num1, string num2) {
        string ans;
        int i=num1.size()-1;
        int j=num2.size()-1;
        int carry=0;
        while(i>=0||j>=0||carry)
        {
            int val=0;
            if(i>=0)
                val=num1[i]-'0';
            if(j>=0)
                val+=num2[j]-'0';
            val+=carry;
            carry=val/10;
            val=val%10 + '0';
            ans.push_back(val);
            j--;
            i--;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

