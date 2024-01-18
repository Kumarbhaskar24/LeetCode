class Solution {
public:

    int climbStairs(int n) {
      int a=1;
      int b=1;
           int c=0;
        if(n<=2)
            return n;
        else{
         
            for(int i=0;i<n-1;i++)
            {
                c=a+b;
                a=b;
                b=c;
            }
        }
        return c;
    }
};