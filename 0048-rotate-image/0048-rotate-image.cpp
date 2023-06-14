class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int k=0,l=0;
        vector<vector<int>> matrix2(n,vector<int>(n,0));
        for(int i=n-1;i>=0;i--)
        {
            l=0;
            for(int j=0;j<n;j++)
            {
                matrix2[j][i]=matrix[k][l];
                l++;
            }
            k++;
        }
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                matrix[i][j]=matrix2[i][j];
    }
};