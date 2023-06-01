class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        queue<pair<int,int>> q;
        int n=grid.size();
        int m=grid[0].size();
        if(grid[0][0]!=0||grid[n-1][m-1]!=0)
            return -1;
        q.push({0,0});
        grid[0][0]=1;
        vector<vector<int>> r={{0,1},{1,0},{1,1},{0,-1},{-1,0},{-1,-1},{1,-1},{-1,1}};
        
        while(!q.empty())
        {
            auto curr=q.front();
            int x=curr.first;
            int y=curr.second;
            q.pop();
            if(x==n-1&&y==m-1)
                return grid[x][y];
            
            for(auto it:r)
            {
                int nx=x+it[0];
                int ny=y+it[1];
                if(nx>=0&&ny>=0&&nx<n&&ny<m&&grid[nx][ny]==0)
                {
                    q.push({nx,ny});
                    grid[nx][ny]=grid[x][y]+1;
                }
            }
                          
        }
        return -1;
    }
};