class Solution {
public:
    
    int solve(vector<int>& nums,int i,int prev,int cnt)
    {
        if(i==nums.size())
            return 0;
        int take=0;
        if(nums[i]>nums[prev]&&cnt==0)
        {
            cnt=1;
            cout<<nums[i]<<" > "<<nums[prev]<<endl;
            take=1+solve(nums,i+1,i,cnt);
        }
        else if(nums[i]<nums[prev]&&cnt==1)
        {
            cnt=0;
            cout<<nums[i]<<" < "<<nums[prev]<<endl;
            take=1+solve(nums,i+1,i,cnt);
        }
       // cout<<take<<" "<<endl;
        int nottake=0;
        nottake=solve(nums,i+1,prev,cnt);
        cout<<take<<" "<<nottake<<endl;
        return max(take,nottake);
    }
    
    
    
    int solve_binary(vector<int> &nums)
    {
        if(nums.size()==1)
            return 1;
        vector<int> ans;
        ans.push_back(nums[0]);
        int cnt=0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]>ans.back())
            {
                if(cnt==0||ans.size()==1)
                {
                    ans.push_back(nums[i]);
                    cnt=1;
                }
                ans.pop_back();
                ans.push_back(nums[i]);
            }
            else if(nums[i]<ans.back())
            {
                if(cnt==1||ans.size()==1)
                {
                    ans.push_back(nums[i]);
                    cnt=0;
                }
                ans.pop_back();
                ans.push_back(nums[i]);
            }      
        }
        return ans.size();
    }
    
    
    int wiggleMaxLength(vector<int>& nums) {
        //return solve(nums,0,0,0);
        return solve_binary(nums);
    }
}; 