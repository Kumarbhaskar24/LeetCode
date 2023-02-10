class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
       
        if(arr[start]== -1) 
            return false;
        if(!arr[start]) 
            return true;
           
        int leftside= start-arr[start] ,rightside = start+arr[start];
        arr[start] = -1;
        return rightside = (rightside < arr.size() && canReach(arr,rightside) ) || (leftside>=0 && canReach(arr,leftside) );
    }
};