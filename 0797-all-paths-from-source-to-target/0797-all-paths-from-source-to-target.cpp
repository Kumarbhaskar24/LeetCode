class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& g) {
        vector<vector<int>> res;
        queue<vector<int>> q;
        vector<int> temp;
        q.push({0});
        while(!q.empty())
        {
            temp=q.front();
            q.pop();
            if(temp.back()==g.size()-1)
                res.push_back(temp);
            for(auto it:g[temp.back()])
            {
                vector<int> t=temp;
                t.push_back(it);
                q.push(t);
            }
            
        }
        return res;
    }
};