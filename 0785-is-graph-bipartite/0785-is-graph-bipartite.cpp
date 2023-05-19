class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
       
        vector<int> col(n,-1);
        for(int i=0;i<n;i++)
        {
            if(col[i]==-1)
            {
                queue<int> q;
                q.push(i);
                col[i]=1;
                while(!q.empty())
                {
                    int temp=q.front();
                    q.pop();
                    for(auto it:graph[temp])
                    {
                        if(col[it]==-1)
                        {
                            col[it]=1-col[temp];
                            q.push(it);
                        }
                        else if(col[it]==col[temp])
                            return false;
                    }
                }
            }
        }
        return true;
    }
};