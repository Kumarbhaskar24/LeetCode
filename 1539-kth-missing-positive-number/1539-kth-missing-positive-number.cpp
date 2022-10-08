class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int cnt=1;
        int num=1;
        int i=0;
        while(i<arr.size()&&num<=k)
        {  
            //cout<<"Nums ="<<num<<endl;
        // cout<<"arr ="<<arr[i]<<endl;
            if(arr[i]==cnt)
            {
                i++;
          //      cnt++;
            }
            else{
            num++;
           
            }
             cnt++;
         //   cout<<"Nums after ="<<num<<endl;
         //   cout<<"Cnt ="<<cnt<<endl;
          //  cout<<"i ="<<i<<endl;
        }
        while(num<=k)
        {
            num++;
            cnt++;
        }
        return cnt-1;
    }
};