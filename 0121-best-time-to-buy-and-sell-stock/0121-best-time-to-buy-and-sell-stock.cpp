class Solution {
public:
    int maxProfit(vector<int>& prices) {
        long long mini=INT_MAX;
        long long maxi=INT_MIN;
        long long p=0;
        long long profit=0;
        for(long long i=0;i<prices.size();i++)
        {
            if(prices[i]<mini)
            {
                mini=prices[i];
            }
          profit=max(profit,prices[i]-mini);
        }
  
    return profit;
    }
};