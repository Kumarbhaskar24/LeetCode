class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        long long temp=-2147483649;
        int cnt=0;
        long long mini=-2147483649;
        for(int i=0;i<points.size();i++)
        {
            if(points[i][0]>temp||points[i][0]>mini)
            {
                temp=points[i][1];
                cnt++;
                mini=temp;
            }
            if(points[i][1]<mini)
            {
                mini=points[i][1];
            }
            
        }
        return cnt;
    }
};