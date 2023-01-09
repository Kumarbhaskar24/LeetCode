class Solution {
public:
    int numberOfSteps(int num) {
       int cnt=0;
        
        while(num)    
        {
           if(num&1)
        {
               num=num-1;
              // cout<<num<<endl;
               if(num==0)
                   cnt++;
               else{
                num=(num>>1);
                cnt+=2;
               }
        }
        else
        {
            num=(num>>1);
            cnt++;
       }
        }
        return cnt;
    }
};