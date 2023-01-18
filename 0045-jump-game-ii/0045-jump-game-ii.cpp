class Solution {
public:
    
//     long long jumpcount(vector<int> nums,int s,int e,vector<int> &dp)
//     {
//         if(s>=e)
//             return 0;
//         if(dp[s]!=10001)
//             return dp[s];
//         //long long mini=INT_MAX;
//         for(int i=1;i<=nums[s];i++)
//         {
//             int a=jumpcount(nums,s+i,e,dp)+1;
//             if(dp[s]>a)
//                 dp[s]=a;
//             }
//         return dp[s];
//     }
    
//     int jump(vector<int>& nums) {
//         vector<int> dp (nums.size()+1,10001);
//         return jumpcount(nums,0,nums.size()-1,dp);
// {//             int cnt=0;
// //             int temp=nums.size()-1;
// //             for(int i=nums.size()-2;i>=0;i--)
// //             {
// //                 if(i+nums[i]>=temp)
// //                     nums[i]=1;
// //                 else{
// //                     int j=0;
// //                     j+=i+nums[i];
// //                     nums[i]=nums[i]+nums[j];
                    
// //                 }
// //             }}
        
//     }
//     }
    
    int jump(vector<int>& nums) {
	vector<int> dp(size(nums), 10001); // initialise all to max possible jumps + 1 denoting dp[i] hasn't been computed yet
	return solve(nums, dp, 0);
}
// recursive solver to find min jumps to reach end
int solve(vector<int>& nums, vector<int>& dp, int pos) {
	if(pos >= size(nums) - 1) return 0;    // when we reach end, return 0 denoting no more jumps required
	if(dp[pos] != 10001) return dp[pos];    // number of jumps from pos to end is already calculated, so just return it
	// explore all possible jump sizes from current position. Store & return min jumps required
	for(int j = 1; j <= nums[pos]; j++)
		dp[pos] = min(dp[pos], 1 + solve(nums, dp, pos + j));        
	return dp[pos];
}
    
    
};