class Solution {
public:      
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<pair<int,int>,int>> q;
        int n=grid.size();
        int m=grid[0].size();
        // vector<vector<int>> visit(n,vector<int>(m,0));
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==2)
                    q.push({{i,j},0});
                if(grid[i][j]==0)
                    cnt++;
            }        
        }
        if(cnt==(n*m))
            return 0;
        int temp=-1;
        int cord[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
        while(!q.empty())
        {
            int r=q.front().first.first;
            int c=q.front().first.second;
            int t=q.front().second;
            temp=max(temp,t);
            q.pop();
            for(int i=0;i<4;i++)
            {
                int x=cord[i][0];
                int y=cord[i][1];
                if(r+x>=0 && r+x<n && c+y>=0 && c+y<m)
                {
                    if(grid[r+x][c+y]==1)
                    {
                    q.push({{r+x,c+y},t+1});
                    grid[r+x][c+y]=2;
                    }

                }
            }  
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                    return -1;
                
            }        
        }
        return temp;
    }
};