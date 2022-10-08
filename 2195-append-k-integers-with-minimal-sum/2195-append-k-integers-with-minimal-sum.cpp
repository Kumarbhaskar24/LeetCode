class Solution {
public:
    long long minimalKSum(vector<int>& nums, int k) {
        { // long long ans=0;
        // long long cnt=1;
        // long long temp=0;
        // sort(nums.begin(),nums.end());
        // for(int i=0;i<nums.size();i++)
        // {
        //  // cout<<"Value of nums"<<nums[i]<<endl;
        // //  cout<<"Value of cnt"<<cnt<<endl;
        //     while(nums[i]!=cnt&&temp<k)
        //     {
        //         ans=ans+cnt;
        //         cnt++;
        //         temp++;
        // //  cout<<"ANS="<<ans<<endl;
        //     }
        //     if(i!=nums.size()-1)
        //     if(nums[i]!=nums[i+1])
        //     cnt++;
        // }
        // if(temp!=k)
        // {
        //     cnt++;
        //     while(temp<k)
        //     {  
        //     ans=ans+cnt;
        //     cnt++;
        //     temp++;
        //     }
        // }
        // return ans;
    }
        long long t=k;
        set<int> s (nums.begin(),nums.end());
        long long ans=(t*(t+1))/2;
        long long cnt=0;
        for(auto it:s)
        {
            if(it<=t)
            {
                ans=ans-it;
                cnt++;
            }
        }
        int temp=t+1;
       while(cnt>0)
       {
            if(s.find(temp)!=s.end())
                temp++;
            else{
                ans=ans+temp;
           //     cout<<ans<<endl;
                temp++;
                cnt--;
            }
        }
        return ans;
    }
};