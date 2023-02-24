class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        vector<vector<int>> dis(m,vector<int> (n,0));
        vector<vector<int>> vis(m,vector<int> (n,0));
        queue<pair<pair<int,int>,int>> q;
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(mat[i][j]==0)
                {
                    q.push({{i,j},0});
                    vis[i][j]=1;
                }
            }
        }
        int chord[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
        while(!q.empty())
        {
            int r=q.front().first.first;
            int c=q.front().first.second;
            int step=q.front().second;
            q.pop();
            dis[r][c]=step;
            for(int i=0;i<4;i++)
            {
                int x=chord[i][0];
                int y=chord[i][1];
                if(r+x>=0&&r+x<m&&c+y>=0&&c+y<n&&vis[r+x][c+y]==0)
                {
                    q.push({{{r+x},{c+y}},step+1});
                    vis[r+x][c+y]=1;
                }
            }
            
        }
        return dis;
    }
};