class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> q;
        for(auto it:stones)
            q.push(it);
        
        while(q.size()!=1)
        {
            int first=q.top();
            q.pop();
            int second=q.top();
            q.pop();
            if(first>=second)
            {
                q.push(first-second);
            }
        }
        return !q.empty()?q.top():0;
    }
    };