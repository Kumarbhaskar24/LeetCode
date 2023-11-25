class Solution {
public:
    int maxCoins(vector<int>& piles) {
       int ans=0;
        sort(piles.begin(),piles.end(),greater<int>());
        int i=0;
        int j=1;
        int k=piles.size()-1;
        while(j<k)
        {
            ans+=piles[j];
            i=j+1;
            j=j+2;
            k--;
        }
        return ans;
    }
};