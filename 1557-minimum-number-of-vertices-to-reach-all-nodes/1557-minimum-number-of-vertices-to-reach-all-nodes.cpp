class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        unordered_map<int,vector<int>> m;
        int s=edges.size();
        for(int i=0;i<s;i++)
        {
            m[edges[i][0]].push_back(edges[i][1]);
        }
        vector<int> ans;
        vector<int> vis(n,-1);
        for(auto it:m)
        {
            int i=it.second.size();
            int j=0;
            while(j<i)
            {
                if(vis[it.second[j]]==-1)
                    vis[it.second[j]]=1;
                j++;
            }
        }
        
        for(int i=0;i<vis.size();i++)
            if(vis[i]==-1)
                ans.push_back(i);
        return ans;
    }
};