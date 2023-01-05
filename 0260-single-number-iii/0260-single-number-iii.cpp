class Solution {
public:
   
    vector<int> singleNumber(vector<int>& nums) {
        int xorsum=0;
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            xorsum=xorsum^nums[i];
        }
        int xs1=0;
        int xs2=0;
        int pos;
        
        for(int i=0;i<nums.size();i++)
        {
            
            pos=ffs(xorsum);
            bool a=nums[i]&(1<<pos-1);
            //int a=1<<pos-1;
           // cout<<a<<endl;
            cout<<pos<<" "<<a<<endl;
            if(a)
            {
                xs1=xs1^nums[i];
                
            }
            else{
                xs2=xs2^nums[i];
            }
        }
        ans.push_back(xs1);
        ans.push_back(xs2);
        return ans;
    }
};