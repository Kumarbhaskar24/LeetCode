class Solution {
public:
    int findDuplicate(vector<int>& nums) {
    {
    // int xs=0;
    // int ans=0;
    // for(int i=0;i<nums.size();i++)
    // {
    // for(int j=i+1;j<nums.size();j++)
    // {
    // // cout<<nums[i]<<" "<<nums[j]<<endl;
    // xs=nums[i]^nums[j];
    // if(xs==0)
    // {
    //     ans=nums[j];
    //     return nums[j];
    // }
    // }
    // }
    // return ans;
    }    
      //  cout<<nums.size();
        vector<int> arr(nums.size(), 0);
       
        for(int i=0;i<nums.size();i++)
        {  
            arr[nums[i]]++;
        //    cout<<nums[i]<<"->"<<arr[nums[i]]<<endl;
             
        }
        for(int i=1;i<nums.size();i++)
        {
            if(arr[i]>1)
                return i;
        }
        return 0;
        }
};