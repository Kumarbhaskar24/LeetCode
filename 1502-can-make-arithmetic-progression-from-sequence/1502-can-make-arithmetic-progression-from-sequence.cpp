class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        if(arr.size()==2)
            return true;
        int a,b;
        for(int i=2;i<arr.size();i++)
        {
            a=2*arr[i-1];
            b=arr[i-2]+arr[i];
            if(a!=b)
                return false;
        }
        return true;
        
    }
};