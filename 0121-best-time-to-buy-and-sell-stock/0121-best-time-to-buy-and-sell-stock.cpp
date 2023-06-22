class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mp=0;
        int s=prices[0];
        int cp=0;
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]<s)
                s=prices[i];
            cp=prices[i]-s;
            if(cp>mp)
                mp=cp;
        }
        return mp;
    }
};