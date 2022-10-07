class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n=10;
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            int temp=nums[i];
            int cnt=0;
        while(temp>0)
        {
            temp= temp/n;
            cnt++;
        }
            if(cnt%2==0)
            {
            ans++;
            }
        }
        return ans;
    }
};