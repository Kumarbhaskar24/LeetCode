class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int sum=0;
        int cnt=0;
        map<long long,long long> m;
        for(auto it:costs)
            m[it]++;
        for(auto it:m)
        {
          //  cout<<it.first<<" "<<it.second<<endl;
            if(it.first*it.second>coins)
            {
                cnt+=coins/it.first;
                return cnt;
            }
            else{
                cnt+=it.second;
                coins-=it.first*it.second;
            }
        }
 
        return cnt;
    }
};