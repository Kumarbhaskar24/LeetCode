class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(),salary.end());
        double ans=0;
        for(int i=1;i<salary.size()-1;i++)
        {
            ans+=salary[i];
        //    cout<<salary[i]<<" ";
        }
      //  cout<<ans<<" "<<salary.size()-2;
        return ans/(salary.size()-2);
    }
};