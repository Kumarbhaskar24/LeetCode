// class Solution {
// public:
//     int subarraySum(vector<int>& nums, int k) {
//         unordered_map<int, int> m;
//         m[0]++;
//         int res=0;
        
//         int sum = 0;
//         for(int i=0; i<nums.size(); i++){
//             sum += nums[i];
//             int currSum = sum - k;
            
//             if(m.count(currSum))
//                 res += m[currSum]; 
            
//             m[sum]++;
//         }
//         return res;
//     }
// };

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int sum=0,ans=0;
        unordered_map<int,int> mp;
        mp[0]++;
        for(int i=0;i<n;++i){
            sum+=nums[i];
            if(mp.find(sum-k)!=mp.end()){
                ans+=mp[sum-k];
            }
            mp[sum]++;
        }
        return ans;
    }
};