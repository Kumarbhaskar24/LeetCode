class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int a=(coordinates[1][0]-coordinates[0][0]);
        int b=(coordinates[1][1]-coordinates[0][1]);
        int c=a*coordinates[0][1];
        int d=b*coordinates[0][0];
        int e=c-d;
        for(int i=0;i<coordinates.size();i++)
        {
                if(a*coordinates[i][1]-b*coordinates[i][0]!=e)
                {
                    return false;
                }
        }
        return true;
    }
};