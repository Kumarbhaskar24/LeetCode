class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
       int cnt=0;
        int n=arr.size()/4;
        if(arr.size()<2)
            return arr[0];
        for(int i=1;i<arr.size();i++)
        {
            if(arr[i]==arr[i-1])
            {
                cnt=cnt+1;
                if(cnt>=n)
                    return arr[i];
            }
            else{
                cnt=0;
            }
        }
        return 0;
    }
};