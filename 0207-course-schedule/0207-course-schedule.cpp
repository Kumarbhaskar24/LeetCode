class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& pre) {
     vector<vector<int>>adj(n);
     vector<int>indeg(n,0);
     for(int i=0;i<pre.size();i++){
         adj[pre[i][1]].push_back(pre[i][0]);
         indeg[pre[i][0]]++;
     }
    // for(int i=0;i<indeg.size();i++)
    //     cout<<i<<" "<<indeg[i]<<endl;
     queue<int>q;
     for(int i=0;i<n;i++){
         if(indeg[i] == 0){
             q.push(i);
         }
     }
     vector<int>topo;
     while(!q.empty()){
         int node= q.front();
         q.pop();
         topo.push_back(node);
         for(int x:adj[node]){
             indeg[x]--;
             if(indeg[x] == 0){
                 q.push(x);
             }
         }
     }
     //if topo size is == n then means it does not have a cycle so we can schedule the courses
     return topo.size() == n;
    }
};