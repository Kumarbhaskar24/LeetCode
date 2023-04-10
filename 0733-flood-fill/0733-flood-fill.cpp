class Solution {
public:
    
    bool isValid(int i,int j,int n,int m,vector<vector<int>> &image,int temp)
    {
        if(i>=0&&i<n&&j>=0&&j<m&&image[i][j]==temp)
            return true;
        return false;
            
    }
    
    void dfs(int i,int j,int n,int m,vector<vector<int>> &image,int color,int temp)
    {
        image[i][j]=color;
        int ax[4]={-1,1,0,0};
        int ay[4]={0,0,-1,1};
        for(int k=0;k<4;k++)
        {
            int nx=i+ax[k];
            int ny=j+ay[k];
            if(isValid(nx,ny,n,m,image,temp))
            {
                dfs(nx,ny,n,m,image,color,temp);
            }
        }
    }
    
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n=image.size();
        int m=image[0].size();
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                if(i==sr&&j==sc&&image[i][j]!=color)
                {
                    int temp=image[i][j];
                    dfs(sr,sc,n,m,image,color,temp);
                }
        return image;
    }
};