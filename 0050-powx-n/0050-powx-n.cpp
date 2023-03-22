class Solution {
public:
    double helper(double x,long n)
    {
        if(n<0)
        {
            n=-n;
        }
    if(n==0)
    {
        return 1;
        
    }
     if(n%2==0)
     {
         return helper(x*x,n/2);
     }
        else{
            return x*helper(x*x,(n-1)/2);
        }
    }
    double myPow(double x, int n) {
        double temp;
        
        temp=helper(x,n);
        if(n<0)
        {
            return 1/temp;
        }
        else{
            return temp;
        }
    
    }
};