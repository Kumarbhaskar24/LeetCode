class Solution {
public:
    int numberOfMatches(int n) {
        int match=0;
        while(n>1){
            if(n%2 == 0){
               int matchcount=n/2;
               n=n/2; 
               match+=matchcount;
            }else{
                  int matchcount=(n-1)/2;
                  n=matchcount+1;
                 match+=matchcount;  
            } 
        }
         
         return match;
    }
};