class Solution {
public:
    int findDuplicate(vector<int>& nums) {
    
     int n = nums.size()-1, res = 0;
    for (int p = 0; p < 32; ++ p) {
        int bit = (1 << p), a = 0, b = 0;
        for (int i = 0; i <= n; ++ i) {
            if (i > 0 && (i & bit) > 0) ++a;
            if ((nums[i] & bit) > 0) ++b;
        }
        if (b > a) res += bit;
    }
    return res;
     
        {
//         vector<int> arr(nums.size(), 0);
       
//         for(int i=0;i<nums.size();i++)
//         {  
//             arr[nums[i]]++;

             
//         }
//         for(int i=1;i<nums.size();i++)
//         {
//             if(arr[i]>1)
//                 return i;
//         }
//         return 0;
        }
        }
};