class Solution {
public:
    int totalMoney(int n) {
        int i=1;
        int price=1;
        int ans=0,sumvalue=1;
        while(i<=n)
        {
            ans+=sumvalue;
            sumvalue++;
            if(i%7==0)
            {
                price++;
                sumvalue=price;
            }
            i++;
        }
        return ans;
    }
};