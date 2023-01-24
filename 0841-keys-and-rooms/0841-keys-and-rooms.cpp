class Solution {
public:
    
    bool kl(vector<vector<int>>& r,vector<int> &dp,int s)
    {

        for(int i=s;i<r.size();i++)
        {
            if(dp[i]==-1)
                return false;
            for(int j=0;j<r[i].size();j++)
            {
                if(dp[r[i][j]]==-1)
                {
                     dp[r[i][j]]=1;
                    kl(r,dp,r[i][j]);
                }                
            }
        }
        return true;
    }
    
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<int> dp(rooms.size()+1,-1);
        dp[0]=0;
        return kl(rooms,dp,0);
    }
};