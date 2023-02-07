class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        // int sum=0;
        // vector<int> v;
        // int cnt=0;
        // int ans=INT_MAX;
        // for(int i=0;i<nums.size();i++)
        // {
        //     sum+=nums[i];
        //     if(v.back()>=target)
        //     {
        //         int temp=target-v.back();
        //         int index=v.upper_bound(v.begin(),v.end())-v.begin();
        //     }
        //     v.push_back(sum);
        //     cnt++;
        // }
        // return ans==INT_MAX?0:ans;
        
        int i=0;
        int j=0;
        int sum=0;
        int ans=INT_MAX;
        while(j<nums.size())
        {
            sum=sum+nums[j];
            int res=0;
            if(sum>=target)
            {
                while(sum>=target&&i<=j)
                {
                    res=j-i+1;
                    ans=min(ans,res);
                    sum-=nums[i];
                    i++;  
                }
            }
            j++;
        }
        return ans==INT_MAX?0:ans;
    }
};