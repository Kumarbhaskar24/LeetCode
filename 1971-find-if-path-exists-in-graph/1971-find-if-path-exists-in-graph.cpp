class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        unordered_map<int,vector<int>> m;
        for(auto it:edges)
        {
            vector<int> temp=it;
            int u=temp[0];
            int v=temp[1];
            m[u].push_back(v);
            m[v].push_back(u);
        }
        vector<bool> vis(n,false);
        queue<int> q;
        q.push(source);
        vis[source]=true;
        while(!q.empty())
        {
            int f=q.front();
            q.pop();
            vector<int> temp=m[f];
            for(int i=0;i<temp.size();i++)
            {
                if(vis[temp[i]]==false)
                {
                    q.push(temp[i]);
                    vis[temp[i]]=true;
                    
                }
                }  
        }
        return vis[destination];
    }
};