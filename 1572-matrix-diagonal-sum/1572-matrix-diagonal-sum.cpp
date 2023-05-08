class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size();
        int ans=0;
        for(int i=0;i<n;i++)
            ans+=mat[i][i];
        int j=n-1;
        for(int i=0;i<n,j>=0;i++,j--)
            ans+=mat[i][j];
        int m=n/2;
        return n%2==0?ans:ans-mat[m][m];
    }
};