class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int> temp;
        while(n)
        {
            temp.push_back(start+(2*(n-1)));
            n--;
        }
        int ans=0;
        for(auto it:temp)
             ans=ans^it;
           
        return ans;
    }
};