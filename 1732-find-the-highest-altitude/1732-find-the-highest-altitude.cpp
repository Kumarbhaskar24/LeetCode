class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int alti=gain[0];
        int ans=0;
        for(int i=1;i<gain.size();i++)
        {
            ans=max(ans,alti);
            alti+=gain[i];
            cout<<ans<<" "<<alti<<endl;
        }
        return max(ans,alti);
        
    }
};