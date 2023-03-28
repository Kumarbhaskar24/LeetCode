class Solution {
public:
    int solve(vector<int>& days, vector<int>& cost,int target,vector<int> &dp )
    {
        if(target>=days.size())
            return 0;
        
        if(dp[target]!=-1)
            return dp[target];
       // cout<<target<<" ";
        int a=solve(days,cost,target+1,dp)+cost[0];
        int i;
        for(i=target;i<days.size()&&days[i]<days[target]+7;i++);
        int b=solve(days,cost,i,dp)+cost[1];
        for(i=target;i<days.size()&&days[i]<days[target]+30;i++);
        int c=solve(days,cost,i,dp)+cost[2];
    return dp[target]=min(a,min(b,c));
    }
    
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        vector<int> dp(days.size(),-1);
        return solve(days,costs,0,dp);
    }
};